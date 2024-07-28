#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   //we have itrate outer loop till n - 2 because last element is always sorted 
   for(int i =0 ; i <= n - 2 ; i++)
   {
       int mini = i ;
       for(int j = i ; j <= n -1 ; j++)
       {
           if(arr[j]<arr[mini])
           {
               mini = j;
           }
       }
       swap(arr[i],arr[mini]);
   }
}
/*
 TC : O(n^2)
 SC : O(1)
 */
