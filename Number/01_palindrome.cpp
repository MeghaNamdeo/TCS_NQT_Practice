//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
	    string reverse(int n )
	    {
	        
		   int rev =0;
		   while (n!=0)
		   {
		       int last_digit = n % 10;
		       rev = rev * 10 + last_digit;
		       n = n /10;
		   }
		   return rev;
	    }
		string is_palindrome(int n)
		{
		   int original_num = n;
		   int rev = reverse(n);
		   if(original_num == rev)
		   return "Yes";
		   else
		   return "No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends