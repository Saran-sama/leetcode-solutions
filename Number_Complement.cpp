class Solution 
{
public:
	int findComplement(int num)
	{
		stack<int> bits;
		int output = 0;
		while (num)
		{
			bits.push(num & 1);
			num = num >> 1;
		}
		while (bits.size())
		{
			output = bits.top() ? output : output | 1;
			bits.pop();
			output = output << 1;
		}
		return output >> 1;
	}
};