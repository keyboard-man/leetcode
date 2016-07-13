#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> summaryRanges(vector<int>& nums)
{
    if(nums.empty())
        return vector<string>();

    int begin=0, q=0, c=0;
    q = begin = nums.front();
    vector<string> result;

    for(auto it=nums.begin()+1;it!=nums.end();++it)
    {
        c = *it;
        if((c==q-1) || (c==q+1))
            q = c;
        else
        {
            if(q==begin)
            {
                //single node
                stringstream ss;
                string temp;
                ss << q;
                ss >> temp;
                result.push_back(temp);
                begin = q = c;
            }
            else{
                 string temp,t;
                 stringstream ss;
                 ss << begin;
                 ss >> temp;
                 temp += "->";
                 ss.clear();
                 ss << q;
                 ss >> t;
                 temp += t;
                 result.push_back(temp);
                 begin = q = c;
            }
        }
    }
    if(q==begin)
    {
         stringstream ss;
         ss << q;
         result.push_back(ss.str());
    }
    else{
        stringstream ss;
        string temp,t;
        ss << begin;
        ss >> temp;
        temp += "->";
        ss.clear();
        ss << q;
        ss >> t;
        temp += t;
        result.push_back(temp);
    }

    return result;
}

int main()
{
     vector<int> nums = {0,7};
    auto result = summaryRanges(nums);
    for(auto x : result)
        cout << x << endl;

    return 0;
}
