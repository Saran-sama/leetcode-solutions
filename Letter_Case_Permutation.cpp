class Solution 
{
    void letterCasePermutationInternal(string& S, int index, string& outputLocal)
    {
        if (index < S.size())
        {
            if (S[index] >= 48 && S[index] <= 57)
            {
                outputLocal += S[index];
                letterCasePermutationInternal(S, index + 1, outputLocal);
                outputLocal.erase(outputLocal.begin() + outputLocal.size() - 1);
            }
            else
            {
                int arr[] = {0, -32};
                for (int i = 0; i < 2; i++)
                {
                    outputLocal += S[index] + arr[i];
                    letterCasePermutationInternal(S, index + 1, outputLocal);
                    outputLocal.erase(outputLocal.begin() + outputLocal.size() - 1);
                }
            }
        }
        else
        {
            _output.push_back(outputLocal);
        }
    }
    
public:
    vector<string> letterCasePermutation(string S) 
    {
        string outputLocal;
        letterCasePermutationInternal(S, 0, outputLocal);
        return _output;
    }
private:
    vector<string> _output;
};