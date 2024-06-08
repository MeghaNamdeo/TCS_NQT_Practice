
//using predefined function 
#include <bits/stdc++.h>
#include <cmath> 
int squareRoot(int a)
{
	return sqrt(a);
}


//using binary serach 
#include <bits/stdc++.h> 
int squareRoot(int a)
{
	int low = 1;
	int high = a;
	while(low <= high)
	{
		int mid = low + (high -low)/2;
		if(mid == a/mid)
		{
			return mid;
		}
		else if(mid < a/mid)
		{
			low = mid + 1;
		}
		else
		{

            high = mid -1 ;

		}
		
	}
	return high;
}
/*
Time complexity : O(logn)
Space Complexity : O(1) 
*/