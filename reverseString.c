/*************************************************************************
	> File Name: reverseString.c
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 20时18分12秒
 ************************************************************************/

char* reverseString(char* s)
{
    if(NULL == s)
        return NULL;
    if(*s == NULL)
        return s;

    char *h = s, *e = s, temp;
    while(*(++e));
    e--;
    while(e>h)
    {
        temp = *e;
        *e = *h;
        *h = temp;
        h++;
        e--;
    }

    return s;
}
