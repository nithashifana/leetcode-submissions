// Minimum number of operations to move all balls to each box
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	vector<int> minOperations(string boxes)
	{
		int n = boxes.size();
		vector<int> box(n, 0);
		for (int i = 0; i < n; i++)
		{
			int k = 0;
			for (int j = 0; j < n; j++)
			{
				if (boxes[j] == '1')
				{
					k += (abs(i - j));
				}
			}
			box[i] = k;
		}
		return box;
	}
};