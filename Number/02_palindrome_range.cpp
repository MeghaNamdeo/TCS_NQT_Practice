#include <bits/stdc++.h> 
int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        rev = rev * 10 + last_digit;
        n = n / 10;
    }
    return rev;
}

bool palindrome(int n)
{
	int original =n;
	int reve = reverse(n);
	return original == reve;
	
}
vector<int> getPalindromes(int n)
{
	vector<int>ans;
	for(int i =1 ;i <= n ;i++)
	{
		if(palindrome(i))
		{
			ans.push_back(i);
		}
	}
	return ans;

}

