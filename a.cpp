#include <iostream>
#include <queue>
#include <vector>
#include <iomanip>

struct Task {
    std::string id;
    int executionTime;
    int remaining_time;
    int finish_time;

    Task(std::string name, int time) {
        id = name;
        executionTime = time;
        remaining_time = time;
        finish_time = 0;
    }
};

struct PriorityBased {
    bool operator()(const Task& t1, const Task& t2) {
        return t1.remaining_time > t2.remaining_time;
    }
};

struct ShortestJob {
    bool operator()(const Task& t1, const Task& t2) {
        return t1.executionTime > t2.executionTime;
    }
};

int main() {

    std::queue<Task> level0, level1, completedTasks;
    std::priority_queue<Task, std::vector<Task>, PriorityBased> level2;
    std::priority_queue<Task, std::vector<Task>, ShortestJob> level3;

    int currentTime = 0;
    int totalTime = 0;
    int processCount;
    
    std::cout << "Enter the number of processes: ";
    std::cin >> processCount;

    if (processCount <= 0) {
        std::cout << "Average Turnaround Time: 0 ms\n";
        return 0;
    }

    for (int i = 0; i < processCount; i++) {
        std::string processID;
        int execTime;
        std::cout << "Enter process name: ";
        std::cin >> processID;
        std::cout << "Enter the execution time: ";
        std::cin >> execTime;

        Task task(processID, execTime);
        level0.push(task);
    }

    while (!level0.empty() || !level1.empty() || !level2.empty() || !level3.empty()) {

        // Round-Robin Scheduling (Queue 0)
        while (!level0.empty()) {
            Task t = level0.front();
            level0.pop();

            int timeSlice = std::min(5, t.remaining_time);
            t.remaining_time -= timeSlice;
            currentTime += timeSlice;

            if (t.remaining_time > 0) {
                level1.push(t);  // Move to FCFS queue
            } else {
                totalTime += currentTime;
                t.finish_time = currentTime;
                std::cout << "Turnaround time of process " << t.id << " is " << t.finish_time << " ms\n";
                completedTasks.push(t);
            }
        }

        // First-Come, First-Served (FCFS) Scheduling (Queue 1)
        while (!level1.empty()) {
            Task t = level1.front();
            level1.pop();

            int timeSlice = std::min(5, t.remaining_time);
            t.remaining_time -= timeSlice;
            currentTime += timeSlice;

            if (t.remaining_time > 0) {
                level2.push(t);  // Move to priority queue
            } else {
                totalTime += currentTime;
                t.finish_time = currentTime;
                std::cout << "Turnaround time of process " << t.id << " is " << t.finish_time << " ms\n";
                completedTasks.push(t);
            }
        }

        // Priority Scheduling (Queue 2) - Inverse of remaining time
        while (!level2.empty()) {
            Task t = level2.top();
            level2.pop();

            int timeSlice = std::min(5, t.remaining_time);
            t.remaining_time -= timeSlice;
            currentTime += timeSlice;

            if (t.remaining_time > 0) {
                level3.push(t);  // Move to SJF queue
            } else {
                t.finish_time = currentTime;
                totalTime += currentTime;
                std::cout << "Turnaround time of process " << t.id << " is " << t.finish_time << " ms\n";
                completedTasks.push(t);
            }
        }

        // Shortest Job First (SJF) Scheduling (Queue 3)
        while (!level3.empty()) {
            Task t = level3.top();
            level3.pop();

            int timeSlice = std::min(5, t.remaining_time);
            t.remaining_time -= timeSlice;
            currentTime += timeSlice;

            if (t.remaining_time > 0) {
                level0.push(t);  // Move back to Round-Robin queue
            } else {
                totalTime += currentTime;
                t.finish_time = currentTime;
                std::cout << "Turnaround time of process " << t.id << " is " << t.finish_time << " ms\n";
                completedTasks.push(t);
            }
        }
    }

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Average Turnaround Time: " << (float)totalTime / processCount << " ms\n";

    return 0;
}