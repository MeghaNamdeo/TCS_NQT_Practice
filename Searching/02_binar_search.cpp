int search(vector<int> &nums, int target) {
   int start = 0;
   int end = nums.size()-1;
   

   while(start<=end)
   {
       /*
       But there is a problem with this approach, what if the value of start or end or both is INT_MAX, it will cause integer overflow.
The better way of calculating mid-index is :  mid = start + (end - start )/2;
instead mid = start + end/2
*/
       int mid = start + (end - start )/2;

       if(nums[mid]== target)
       return mid;
       else if(nums[mid]<target)
       start = mid + 1;
       else
       end = mid -1;
   }
   return -1;
}
/* TC : O(log n )
SC : O(1)
*/