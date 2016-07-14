#include <iostream>

using namespace std;

int addDigits(int num)
{
    return ((num - 1) % 9 + 1);
}

int main()
{
    int temp = 0;
    cout << ">> ";
    cin >> temp;
    cout << "<< " << addDigits(temp) << endl;

    return 0;
}
