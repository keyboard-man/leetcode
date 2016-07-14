#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
    set<int> temp1, temp2;
    vector<int> result;

    for(auto x: nums1)
    {
        temp1.insert(x);
    }

    for(auto x: nums2)
    {
        temp2.insert(x);
    }

    for(auto x: temp2)
    {
        if(temp1.count(x)>0)
            result.push_back(x);
    }

    return result;
}

int main()
{
     vector<int> nums1 = {1,2,2,1}, nums2 = {3,3};
     vector<int> temp = intersection(nums1, nums2);
     for(auto x : temp)
         cout << x << "\t";
     cout << endl;

     return 0;
}
