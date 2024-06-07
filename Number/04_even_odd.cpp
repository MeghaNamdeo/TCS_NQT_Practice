

#include <iostream>
using namespace std;
void evenOdd(int a){
        if(a%2!=0){
            cout<<"Odd"<<endl;
        }
        else
        {
            cout<<"Even "<<endl;
            
        }
        
    }
int main()
{
    int b ;
    
    cout<<"Enter value of b  here : ";
    cin>>b;
    evenOdd(b);

    return 0;
}

//using bit manupulation
class Solution{   
public:
    string oddEven(int N){
        string ans;
      if(N&1==1)
      ans= "odd";
      else
      ans ="even";
      
      return ans;
    }
};

