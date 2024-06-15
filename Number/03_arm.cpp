
#include <iostream>
#include <cmath>

using namespace std;

// Function to count number of digits
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        ++count;
    }
    return count;
}

// Function to check if a number is Armstrong or not
bool isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;
    originalNum = num;

    // Count number of digits
    n = countDigits(num);

    // Calculate the sum of nth power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // If num is equal to result, then it's an Armstrong number
    if (result == num)
        return true;
    else
        return false;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number))
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;

    return 0;
}




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
