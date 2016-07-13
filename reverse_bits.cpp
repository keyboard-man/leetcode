#include <iostream>
#include <bitset>
#include <cstdint>

using namespace std;

uint32_t reverseBits(uint32_t n)
{
    uint32_t result = 0;
    for(int i=0;i<32;i++)
    {
        result = result << 1;
        result |= (n&1);
        n = n >> 1;
    }

    return result;
}

int main()
{
    uint32_t temp = 43261596;
    cout << "Please input uint32_t number: ";
    cin >> temp;
    bitset<32> foo(temp);
    cout << "before:\t" << foo << endl;
    cout << "after:\t" << bitset<32>(reverseBits(temp)) << endl;

    return 0;
}
