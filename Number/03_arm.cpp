

#include <iostream>
using namespace std;
string armstrongNumber(int n){
        int original = n;
        int sum=0;
        while( n > 0)
        {
            int l = n % 10;
            sum = sum + l * l * l;
            n = n / 10;
        }
        if(original  == sum)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
    }
int main()
{
    int n ;
    cout<<"Enter Number here : ";
    cin>>n;
    cout<<armstrongNumber(n);

    return 0;
}
