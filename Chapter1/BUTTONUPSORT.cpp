//
// Created by andrew on 18-4-17.
//

#include "BUTTONUPSORT.h"
#include "MeageList.h"
/**
 * 本函数用于实现归并算法
 * 同时在这里实现一种与前边算法不同参数的合并两个list的算法
 * @param a
 * @param m
 */



void ButtonUpSort(int a[],int n)
{
    int t = 1;
    while (t < n)
    {
        int s = t;
        t = s * 2;
        int i = 0;
        while ((i + t) <= n)
        {
            Merge(a,i + 1,i + s,i + t);
            i += t;
        }
        if((i + s) < n)
        {
            Merge(a,i + 1,i + s, n);
        }
    }
}
