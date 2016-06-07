/*************************************************************************
	> File Name: findKthLargest.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 20时54分24秒
 ************************************************************************/

bool myJudge(int a, int b)
{
    return (a > b);
}

class Solution
{
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        std::random_shuffle (nums.begin(), nums.end());
        nth_element (nums.begin(), nums.begin()+k-1, nums.end(), myJudge);
        return *(nums.begin() + k - 1);
    }
};
