/*************************************************************************
	> File Name: searchMatrix.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 20时46分51秒
 ************************************************************************/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = 0 , n = 0;
        m = matrix.size();
        if(m==0)
            return false;
        else
        {

            n = matrix[0].size();
            if(n==0)
                return false;
            else
            {

                int left = 0, right = m-1;
                int mid = (left + right) / 2;
                while(left <= right)
                {

                    if(matrix[mid][0]==target)
                        return true;
                    else if(matrix[mid][0] > target)
                    {

                        right = mid - 1;
                        mid = (left + right) / 2;
                    }
                    else
                    {

                        left = mid + 1;
                        mid = (left + right) / 2;
                    }
                }
                if(right < 0)
                    return false;
                m = right;
                right = n-1;
                left = 0;
                mid = (left + right) / 2;
                while(left <= right)
                {

                    if(matrix[m][mid]==target)
                        return true;
                    else if(matrix[m][mid] > target)
                    {

                        right = mid - 1;
                        mid = (left + right) / 2;
                    }
                    else
                    {

                        left = mid + 1;
                        mid = (left + right) / 2;
                    }
                }
                return false;
            }
        }
    }
};
