 //using third variable 
#include <iostream>
using namespace std;
int main()
{
    int a=12;
    int b=30;
    
    int c = a;
    a = b;
    b = c;
    
    cout<< "a = "<<a<<endl;
    cout<< "b = "<<b<<endl;

    return 0;
}



 //using xor variable 
#include <iostream>
using namespace std;
int main()
{
    int a=12;
    int b=30;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    cout<< "a = "<<a<<endl;
    cout<< "b = "<<b<<endl;

    return 0;
}

//not using third variable 
 //not using third  variable 
#include <iostream>
using namespace std;
int main()
{
    int a=12;
    int b=30;
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout<< "a = "<<a<<endl;
    cout<< "b = "<<b<<endl;

    return 0;
}