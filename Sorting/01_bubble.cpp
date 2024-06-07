class Solution {
  public:
    
    void bubbleSort(int arr[], int n) {
       
       for(int i= n -1 ;i>0;i--)
       {
           bool didSwap= 0;
           for( int j = 0 ;j <=i -1 ; j++)
           {
               if(arr[j]>arr[j+1])
               {
               swap(arr[j],arr[j+1]);
               }
               didSwap=1;
           }
            if(didSwap==0)
           break;
       
       }
      
    }
};
/*
Time Complexity (Best case ): O(n)
Time Complexity (Average and Worst case ): O(n^2)
Space Complexity : O(1)
*/
