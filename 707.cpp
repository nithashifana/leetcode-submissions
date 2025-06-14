// Design Linked List
// Medium

class MyLinkedList {
private:
    struct ListNode {
        int val;
        ListNode* prev;
        ListNode* next;
        ListNode(int value) : val(value), prev(nullptr), next(nullptr) {}
    };
    ListNode* head;
    ListNode* tail;
    int size;

public:
    MyLinkedList() {
        head = new ListNode(0);
        tail = new ListNode(0);
        head->next = tail;
        tail->prev = head;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size)
            return -1;
        ListNode* curr = head->next;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        return curr->val;
    }

    void addAtHead(int val) {
        ListNode* node = new ListNode(val);
        ListNode* nextNode = head->next;
        node->next = nextNode;
        node->prev = head;
        head->next = node;
        nextNode->prev = node;
        size++;
    }

    void addAtTail(int val) {
        ListNode* node = new ListNode(val);
        ListNode* temp = tail->prev;

        node->next = tail;
        node->prev = temp;
        tail->prev = node;
        temp->next = node;
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size)
            return;

        ListNode* prevNode = head;
        ListNode* node = new ListNode(val);
        for (int i = 0; i < index; i++) {
            prevNode = prevNode->next;
        }
        ListNode* nextNode = prevNode->next;
        node->next = prevNode->next;
        nextNode->prev = node;
        prevNode->next = node;
        node->prev = prevNode;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size)
            return;
        ListNode* curr = head->next;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        ListNode* pr = curr->prev;
        ListNode* ne = curr->next;
        pr->next = ne;
        ne->prev = pr;
        delete curr;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */