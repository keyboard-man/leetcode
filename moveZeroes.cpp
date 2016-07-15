#include <iostream>
#include <vector>

using namespace std;

void moveZeros(vector<int>& nums)
{
    int count = 0;
    for(auto it = nums.begin(); it != nums.end();)
    {
        if(*it == 0)
        {
            nums.erase(it);
            count++;
        }
        else
            ++it;
    }
    nums.insert(nums.end(), count, 0);
}

int main()
{
    vector<int> nums = {0};
    cout << "BEFORE:" << endl;
    for(auto x : nums)
        cout << x << "\t";
    cout << endl;
    moveZeros(nums);

    for(auto x : nums)
        cout << x << "\t";
    cout << endl;

    return 0;
}
