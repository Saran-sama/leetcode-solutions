class Solution 
{
    string GetDomain(string& email)
    {
        string domain = "";
        int i = 0;
        for (i = 0; i < email.size();i++)
        {
            if (email[i] == '@')
            {
                i++;
                break;
            }
        }
        for (int j = i; j < email.size();j++)
        {
            domain += email[j];
        }
        return domain;
    }
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        set<string> list;
        for (auto& email : emails)
        {
            int i = 0;
            string filteredEmail;
            while ((email[i] != '+') && (email[i] != '@'))
            {
                if (email[i] != '.')
                {
                    filteredEmail += email[i];
                }
                i++;
            }
            list.insert(filteredEmail + GetDomain(email));
        }
        return list.size();
    }
};