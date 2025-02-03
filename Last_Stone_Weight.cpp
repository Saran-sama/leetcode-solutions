class Solution {
public:
	int lastStoneWeight(vector<int>& stones)
	{
		priority_queue<int, vector<int>, less<int> > queue;
		for (auto stone : stones)
		{
			queue.push(stone);
		}
		while (queue.size() > 1)
		{
			int top = queue.top();
			queue.pop();
			int top2 = queue.top();
			queue.pop();
			if (top == top2)
			{
				continue;
			}
			queue.push(abs(top - top2));
		}
		return queue.top();
	}
};