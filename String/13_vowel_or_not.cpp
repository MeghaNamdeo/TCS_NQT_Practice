//using inbuilt  function 
class Solution{   
public:
    string isVowel(char c){
      string vowels="aeiouAEIOU";
      if(vowels.find(c)!=string::npos)
      {
          return "YES";
      }
      else
      {
          return "NO";
      }
        
    }
};
/*
TC : O(1)
SC :O(1)
*/


//or
class Solution{   
public:
    string isVowel(char c){
      if(c=='a'||c=='u'||c=='i'||c=='o'||c=='e'||c=='A'||c=='U'||c=='I'||c=='O'||c=='E')
          return "YES";
      else
          return "NO";
        
    }
};
/*
TC : O(1)
SC :O(1)
*/