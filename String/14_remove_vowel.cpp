//using in built
class Solution{
public:	
		
	string removeVowels(string S) 
	{
	   string ans ="";
	   string vowel = "AEIOUaeiou";
	   for(int i=0;i<S.length();i++)
	   {
	       
	       if(vowel.find(S[i])==string::npos)
	       {
	           ans = ans + S[i];
	       }
	   }
	   return ans;
	}
};
 /*
 TC : O(n)
 SC : O(n)//ans string is used
 */
 

 //using set 
 class Solution{
public:	
		
	string removeVowels(string S) 
	{
	   string ans ="";
	  unordered_set<char>vowel = {'a' , 'e' , 'i' , 'o' , 'u'  ,'A' , 'I' , 'O','U' ,'E'};
	   for(int i=0;i<S.length();i++)
	   {
	       
	       if(vowel.find(S[i])==vowel.end())
	       {
	           ans = ans + S[i];
	       }
	   }
	   return ans;
	}
};
 /*
 TC : O(n)
 SC : O(n)//ans string is used
 */
 
//User function template for C++
class Solution{
public:	
		
	string removeVowels(string S) 
	{
	   std::string result = "";
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u' &&
            S[i] != 'A' && S[i] != 'E' && S[i] != 'I' && S[i] != 'O' && S[i] != 'U') {
            result += S[i];
        }
    }return result;
	}

};