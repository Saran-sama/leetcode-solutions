class Solution
{
public:
	int firstBadVersion(int n, int left, int right)
	{
		if (left == right)
		{
			return left;
		}
		int mid = ((right - left) / 2) + left;
		if (isBadVersion(mid))
		{
			return firstBadVersion(n, left, mid);
		}
		return firstBadVersion(n, mid + 1, right);
	}
public:
	int firstBadVersion(int n)
	{
		int tempN = n;
		int left, right;
		if (isBadVersion(n))
		{
			left = 0;
			while (isBadVersion(n))
			{
				n = n / 2;
			}
			right = n * 2;
		}
		else
		{
			left = 0;
			while (isBadVersion(n) == false)
			{
				n = n * 2;
			}
			right = n;
		}
		return firstBadVersion(tempN, left, right);
	}

};