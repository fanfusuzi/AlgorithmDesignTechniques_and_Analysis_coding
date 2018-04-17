//
// Created by andrew on 18-4-17.
//

#include "MeageList.h"
/**
 * 假定有一个数组A【1...m】,p,m为它的2个索引
 * A[1,P],A[P+1,m]分辨按牲畜排列
 * 现在要求重新安排A的位置
 */

void Merge(int a[],int p,int q,int e)
{
    /*
     * 三个参数，分别表示，p是第一个list的起始点，q是第一个list的结束点
     * e是第二个list的终止点
     */
    int b[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int s1 = p;
    int s2 = q + 1;
    int e1 = q;
    int e2 = e;
    int k = s1;
    while( s1 <= e1 && s2 <= e2)
    {

        if(a[s1] <= a[s2])
        {
            b[k++] = a[s1 ++];
        }
        else
        {
            b[k++] = a[s2++];
        }

    }

    while(s1 <= e1)
    {
        b[k++] = a[s1 ++];
    }

    while(s2 <= e2)
    {
        b[k++] = a[s2 ++];
    }

    for (int i = p; i <= e; ++i)
    {
        a[i] = b[i];
    }
}