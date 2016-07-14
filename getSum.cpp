#include <iostream>

using namespace std;

int getSum(int a, int b)
{
    int carry = b, sum = a;

    while(carry)
    {
        int temp = sum ^ carry;
        carry = (sum & carry) << 1;
        sum = temp;
    }

    return sum;
}

int main()
{
    int a = 0, b = 0;
    cout << "Please input two integers." << endl;
    cin >> a >> b;
    cout << "sum of a & b is " << getSum(a,b) << endl;

    return 0;
}
