//
// Created by andrew on 18-4-17.
//

#include "MeageList.h"
/**
 * 假定有一个数组A【1...m】,p,m为它的2个索引
 * A[1,P],A[P+1,m]分辨按牲畜排列
 * 现在要求重新安排A的位置
 */

void Merge(int a[],int b[] ,int p,int m)
{
    int s1 = 1;
    int s2 = p + 1;
    int k = 1;
    while(s1 <= p && s2 <= m )
    {
        if(a[s1] <= a[s2])
        {
            b[k ++] = a[s1 ++];
        }
        else
        {
            b[k ++] = a[s2 ++];
        }
    }

    while(s1 <= p)
    {
        b[k ++] = a[s1 ++];
    }

    while (s2 <= m)
    {
        b[k ++] = a[s2 ++];
    }
}