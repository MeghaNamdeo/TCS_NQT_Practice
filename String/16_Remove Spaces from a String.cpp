class Solution
{
  public:
    string modify (string s)
    {
       
       string ans = "";
       for(int i=0;i<s.length();i++)
       {
           if(s[i]!=' ')
           ans = ans + s[i];
       }
       return ans;
    }
};
/*
TC :O(n)
SC : O(n);
*/

    string removeSpecialCharacter(string s) {
     string ans = "";
             for (int i=0;i<s.length();i++) {
            char ch = s[i];
            if (isalpha(ch)) {
                ans += ch;
            }
        }
        if (ans.empty()) {
            ans = "-1"; 
        }
        return ans;
        
    }  

    /*
     TC and SC : O(n)*/