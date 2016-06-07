/*************************************************************************
	> File Name: firstBadVersion.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年05月20日 星期五 09时34分26秒
 ************************************************************************/

#include <iostream>

using namespace std;

bool isBadVersion(int version)
{
    if(version >= 1702766719)
    {
        cout << version << " is bad!" << endl;
        return true;
    }
    else
    {
        cout << version << " is ok!" << endl;
        return false;
    }
}

int firstBadVersion(int n)
{
    if(n==1)
        return 1;

    int e = n, h = 1, m = (e + h) / 2;

    while(h<=e)
    {
        if(isBadVersion(m))
        {
            if(h==m)
                return h;
            e = m;
            m = (e - h) / 2 + h;
        }
        else
        {
            if(e - m <=1)
                return e;
            else
            {
                h = m + 1;
                m = (e - h) / 2 + h;
            }
        }
    }
}

int main()
{
    cout << "first bad version:" << firstBadVersion(2126753390) << endl;

    return 0;
}
