/*************************************************************************
	> File Name: triangle.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年05月17日 星期二 09时58分59秒
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int minimumTotal(vector<vector<int>>& triangle)
{
    if(triangle.size()==0)
        return 0;
    if(triangle.size()==1)
        return triangle[0][0];

    vector<vector<int>>::iterator iter = triangle.end();
    vector<int> sum(*--iter);
    for(--iter;iter!=triangle.begin();--iter)
    {
        int size = (*iter).size();
        for(int i=0;i<size;i++)
        {
            sum[i] = sum[i]<sum[i+1] ? sum[i]+(*iter)[i] : sum[i+1]+(*iter)[i];
        }
    }
    
    return (sum[0]<sum[1]?sum[0]+triangle[0][0]:sum[1]+triangle[0][0]);
}

int main()
{
    vector<vector<int>> result;
    result.push_back(vector<int>(1,10));

    int re = 0;
    re = minimumTotal(result);
    cout << "result:" << re << endl;

    return 0;
}
