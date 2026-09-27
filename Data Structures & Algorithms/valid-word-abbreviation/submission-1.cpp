#include <cctype>
class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        if(word==abbr)
        {
            return true;
        }
        int i=0;
        int j=0;
        while(i<word.size() && j<abbr.size())
        {
            if(isdigit(abbr[j]))
            {
                if(abbr[j]=='0')
                {
                    return false;
                }
                int digit=0;
                while(j<abbr.size() && isdigit(abbr[j]))
                {
                    digit=digit*10+(abbr[j]-'0');
                    j++;
                }
                i=i+digit;
            }
            else
            {
                if(word[i]!=abbr[j])
                {
                    return false;
                }
                i++;
                j++;
            }
            
        }
        return i==word.size() && j==abbr.size();
    }
};