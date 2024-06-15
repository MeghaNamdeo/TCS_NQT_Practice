#include <bits/stdc++.h> 
long long int reverseNumber(long long int n)
{
	long long  rev_num =0;
	while(n > 0)
	{
		long long  last_digit = n % 10;
	    rev_num = (rev_num*10) + last_digit;
		n = n / 10;
	}
	return rev_num;
}/*
Time Complexity: O(n), where n is the length of the given number

Space Complexity: O(1)
*/