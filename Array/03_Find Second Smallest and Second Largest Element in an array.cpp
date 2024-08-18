 //brute force 
    
    int print2largest(vector<int> &arr) {
       sort(arr.begin(),arr.end());
       return arr[arr.size() -2];
    }
// Time  Complexity :O(nlog n) , SC:O(1)


class Solution {
  public:
    // Function returns the second
    // optimal approach 
    int largest (vector<int>&arr)
    {
        int maxi = INT_MIN;
        for( int i =0;i< arr.size();i++)
        {
            if(maxi <= arr[i])
            {
                maxi = arr[i];
            }
        }
        return maxi;
    }
    int print2largest(vector<int> &arr) {
        if (arr.size() < 2) return -1;
        int large= largest(arr);
        int secondL = INT_MIN;
        
        for( int i = arr.size() - 1 ; i >=0 ; i--)
        {
            if(arr[i]!= large && arr[i]>secondL)
            {
                secondL =arr[i];
            }
            
        }
        return secondL;
    }
    
};/*
Time Complexity (TC): O(n)
Space Complexity (SC): O(1)*/

//optimal way
class Solution {
  public:
    int smallest(vector<int>&arr)
    {
        int mini = INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
            if(mini > arr[i])mini = arr[i];
            
        }
        return mini;
    }
    vector<int> minAnd2ndMin(vector<int> &arr) {
       if(arr.size()<2)return { -1};
       
       int SecondS= INT_MAX;
       int FirstS = smallest(arr);
       
       for(int i =  0; i < arr.size();i++)
       {
           if(arr[i]!=FirstS && arr[i]<SecondS)
           {
               SecondS=arr[i];
               
           }
       }
       if (SecondS == INT_MAX) {
            return { -1 };
        }
       return {FirstS,SecondS};
    }
    
};// TC:O(n), SC:O(1)



int SecondL(int n, vector<int> a)
{
 int largest = a[0];
    int secondL = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(a[i] > largest) {
            secondL = largest;
            largest = a[i];
        } else if(a[i] < largest && a[i] > secondL) {
            secondL = a[i];
        }
    }

    return secondL;
}
int SecondS(int n, vector<int> a)
{
     int smallest = a[0];
    int secondS = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(a[i] < smallest) {
            secondS = smallest;
            smallest = a[i];
        } else if(a[i] >smallest&& a[i] <secondS) {
            secondS = a[i];
        }
    }

    return secondS;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int second_S = SecondS(n, a);
    int second_L = SecondL(n, a);

    return {second_L, second_S};
}

