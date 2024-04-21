

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
