#include <iostream>
using namespace std;
int main()
{
    int number, fact = 1;
    cout << "Enter the number you want the factorial of: ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }

    cout << "The factorial is: " << fact;
}