class Solution
{
    template<typename T>
    void swap(T& a, T& b)
    {
        T temp = a;
        a = b;
        b = temp;
    }
public:
    string reverseOnlyLetters(string S)
    {
        int i = 0, j = S.length()-1;
        while (i < j)
        {
            while ((S[i] < 'a' || S[i] > 'z') && (S[i] < 'A' || S[i] > 'Z') && (i < j))
            {
                i++;
            }
            while ((S[j] < 'a' || S[j] > 'z') && (S[j] < 'A' || S[j] > 'Z') && (i < j))
            {
                j--;
            }
            swap(S[i], S[j]);
            i++; j--;
        }
        return S;
    }
};