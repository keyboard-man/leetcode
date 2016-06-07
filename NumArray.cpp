/*************************************************************************
	> File Name: NumArray.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 20时50分33秒
 ************************************************************************/

class NumArray
{
    int *sum;
public:
    NumArray(vector<int> &nums)
    {
        sum = new int[nums.size()+1];
        for(int i=0;i<nums.size();i++)
            sum[i+1] = sum[i] + nums[i];
    }

    int sumRange(int i, int j)
    {
        return sum[j+1] - sum[i];
    }
};

//Your NumArray object will be instantiated and called as such:
//NumArray numArray(nums);
//numArray.sumRange(0, 1);
//numArray.sumRange(1, 2);
