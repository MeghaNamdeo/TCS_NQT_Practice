//brute force 
 int NumberofElementsInIntersection(int arr1[], int arr2[], int n, int m) {
          vector<int>ans;
	     for(int i=0;i<n;i++)
        {
           for(int j =0 ; j < m ; j++)
           {
               if(arr1[i]==arr2[j])
               {
                ans.push_back(arr1[i]);
                arr2[i]=INT_MIN;//to remove duplicate element 
                break;
               }
            }

    }
    return ans.size();
    }
};/*
 TC : O(n * m)
 SC : O(1)
 */


class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        
        vector<int>intersect;
        for(int i =0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(a[i]==b[j])
                intersect.push_back(a[i]);
            }
        }
        return intersect.size();
    }
};
/*
TC : O(n * m)
SC : O(min(n,m))
*/

//using loop 
int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
      sort(a,a+n);
      sort(b,b+m);
      int i=0,j=0;
      vector<int>intersect;
      
      while(i < n && j < m)
      {
          if(a[i]==b[j])
          {
            intersect.push_back(a[i]);
            i++;
            j++;
          }
          
          else if (a[i]<b[j])
          {
              i++;
          }
          else
          {
              j++;
          }
          
      }
      return intersect.size();
    }

/*
Time Complexity: O(nlogn+mlogm)
Space Complexity: O(max(logn+logm,min(n,m)))
*/

//optimal approach 
int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
         unordered_set<int> set1(a, a + n);
        unordered_set<int> intersect;
        
        for (int i = 0; i < m; ++i) {
            int num = b[i];
            auto it = set1.find(num);
            if (it != set1.end()) {
                intersect.insert(num);
            }
        }
        
        return intersect.size();
    }
    /*
    Time Complexity: O(n+m)
Space Complexity: O(n)
*/


