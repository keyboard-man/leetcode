/*************************************************************************
	> File Name: isPowerOfTwo.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 20时57分46秒
 ************************************************************************/

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int count = 0;
        while(n)
        {
            count += (n & 1);
            n = n >> 1;
            if(count > 1)
                return false;
        }
        if(count == 1)
            return true;
        else
            return false;
    }
};
