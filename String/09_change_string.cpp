/*
Input:
S = "abCD"
Output: abcd
Explanation: The first letter (a) is 
lowercase. Hence, the complete string
is made lowercase.
*/
class Solution{
    public:
    
    string modify (string s)
    {
        if(s[0]>='a' && s[0]<='z')
        {
            for(int i=0;i<s.length();i++)
            {
                if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]+'a'-'A';
            }
        }
        else if(s[0]>='A' && s[0]<='Z')
        {
            for(int i=0;i<s.length();i++)
            {
                if(s[i]>='a'&&s[i]<='z')
                s[i]=s[i]+'A'-'a';
            }
        }
        return s;
    }
};
/*
TC : O(n)
SC : O(1)
*/
