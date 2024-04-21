

#include <iostream>
using namespace std;
void Pos_Neg(int a){
        if(a>0){
            cout<<"Positive"<<endl;
        }
        else if(a<0)
        {
            cout<<"Negative "<<endl;
            
        }
        else
        {
            cout<<"Zero"<<endl;
        }
        
    }
int main()
{
    int b ;
    
    cout<<"Enter value of b  here : ";
    cin>>b;
    Pos_Neg(b);

    return 0;
}
