//
// Created by andrew on 18-4-16.
//

#include "LinearSearch.h"

//
// Created by andrew on 18-4-16.
//


//返回找到所给值的索引
int linearsearch(int a[],int len,int key)
{
    for(int i = 1;i <= len;i++)
    {
        if(key == a[i])
        {
            return i;
        }
    }
    return 0;
}