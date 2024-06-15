

#include <bits/stdc++.h>

using namespace std;	
	
	string reverse(string S)
	{
	    int st = 0 ; 
	    int e = S.length()-1;
	    while( st < e)
	    {
	        swap(S[st], S[e]);
	        st++;
	        e--;
	    }
	    return S;
	}
	int isPalindrome(string S)
	{
	string original = S;
    string rev = reverse(S);
    return original == rev;
    
	}
int main()
{
    string s;
    cout<<" Enter String here : ";
    getline(cin,s);
   if(isPalindrome(s))
   {
       cout<<" Given String is Palindrome "<<endl;
   }
   else 
   {
       cout<<" Given String is not Palindrome "<<endl;
   }
    
   

    return 0;
}

TC : O(n)
SC : O(n)