//
// Created by andrew on 18-4-17.
//

#include "SelectedSort.h"

/**
 *
 * 实现一个简单的选择排序
 * @param a
 * @param n
 */
void SelectionSort(int a[],int n)
{
    for(int i = 1;i <= n - 1;i ++)
    {
        int k = i;
        for(int j = i + 1;j <= n;j ++ )
        {
            if(a[j] < a[k])
            {
                k = j;
            }
        }
        //用于交换
        if(k != i)
        {
            int temp = a[k];
            a[k] = a[i];
            a[i] = temp;
        }
    }
}