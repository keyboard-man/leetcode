/*************************************************************************
	> File Name: spiralOrder.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 20时48分40秒
 ************************************************************************/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int m = matrix.size(), n = 0;
        if(m==0)
            return result;
        else
        {
            n = matrix[m-1].size();
            if(n==0)
                return result;
            else
            {
                int i = 0, j = -1;
                int count = 0;
                while(true)
                {
                    while(j<n-1 && matrix[i][j+1]!=INT_MAX)
                    {
                        result.push_back(matrix[i][j+1]);
                        matrix[i][j+1] = INT_MAX;
                        count++;
                        if(count>=(m*n))
                            return result;
                        j++;
                    }
                    while(i<m-1 && matrix[i+1][j]!=INT_MAX)
                    {
                        result.push_back(matrix[i+1][j]);
                        matrix[i+1][j] = INT_MAX;
                        count ++;
                        if(count>=(m*n))
                            return result;
                        i++;
                    }
                    while(j>0 && matrix[i][j-1]!=INT_MAX)
                    {
                        result.push_back(matrix[i][j-1]);
                        matrix[i][j-1] = INT_MAX;
                        count ++;
                        if(count>=(m*n))
                            return result;
                        j--;
                    }
                    while(i>0 && matrix[i-1][j]!=INT_MAX)
                    {
                        result.push_back(matrix[i-1][j]);
                        matrix[i-1][j] = INT_MAX;
                        count++;
                        if(count>=(m*n))
                            return result;
                        i--;
                    }
                }
            }
        }
    }
};
