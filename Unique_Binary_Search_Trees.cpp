class Solution {
public:
    int numTrees(int n) {
        if (n)
            return (2 * n) - 1;
        else
            return n;
    }
};