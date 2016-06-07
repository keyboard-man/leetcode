/*************************************************************************
	> File Name: generate.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 20时42分17秒
 ************************************************************************/

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result;
        for(int i=1;i<=numRows;i++)
        {
            vector<int> temp;
            if(i==1)
            {
                temp.push_back(i);
                result.push_back(temp);
            }
            else
            {
                temp.push_back(1);
                for(int j=0;j<(result[i-2].size()-1);j++)
                {
                    temp.push_back(result[i-2][j]+result[i-2][j+1]);
                }
                temp.push_back(1);
                result.push_back(temp);
            }
        }
        return result;
    }
};
