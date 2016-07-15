#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    set<int> temp;
    for(auto x : nums)
    {
        if(temp.count(x)>0)
            return true;
        else
            temp.insert(x);
    }

    return false;
}

int main()
{
    vector<int> nums = {3,3};

    cout << "Contains Duplicate: " << containsDuplicate(nums) << endl;

    return 0;
}
