#include <iostream>
#include <string>

using namespace std;

int titleToNumber(string s)
{
    int result = 0;
    for(auto x : s)
    {
        result = 26*result + (x-'A' + 1);
    }

    return result;
}


int main()
{
    string s;
    cout << "input STRING:";
    cin >> s;
    cout << "number is: " << titleToNumber(s) << endl;

    return 0;
}
