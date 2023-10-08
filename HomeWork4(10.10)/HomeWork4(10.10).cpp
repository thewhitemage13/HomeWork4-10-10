#include <iostream>
using namespace std;

int Sum(int a)
{
    if (a > 0)
    {
        return(a % 10) + Sum(a / 10);
    }   
}

int main()
{
    int a;
    cin >> a;
    int sum = Sum(a);
    cout << "Sum: " << sum-1;
}