/*************************************************************************
	> File Name: hammingWeight.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 20时10分41秒
 ************************************************************************/

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        if(n == 0)
            return 0;
        int result = 0;
        for(int i=0;i<32;i++)
        {
            result += (n & 1);
            n = n >> 1;
        }

        return result;
    }
};
