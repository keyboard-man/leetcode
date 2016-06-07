/*************************************************************************
	> File Name: twoSum.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 21时09分11秒
 ************************************************************************/

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int length = nums.size();
        for(int i=0;i<length-1;i++)
        {
            for(int j=i+1;j<length;j++)
                if((nums[i]+nums[j])==target)
                {
                    vector<int> result;
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
        }
    }
};
