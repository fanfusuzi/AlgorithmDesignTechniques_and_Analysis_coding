//
// Created by andrew on 2018/5/30.
//

#include "QuickSort.h"

void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;

}
/*
 * 在快速排序中，有两种常见的partion函数
 * 1）双向遍历，这种方法在本科的时候很常见，在此不赘述
 * 2）单向遍历，这种方法比之前的那种方法相比，更加简洁高效，故在这里重新写一下
 */
int Partion(int a[],int low,int high)
{
    int i = low;
    int x = a[low];
    //在这里，i用来指示，在i之前包括i的元素已经被排列好
    for (int j = low + 1; j <= high; ++j) {
        if(a[j] <= x)
        {
            i ++;
            if(i != j)
            {
                swap(a[i],a[j]);
            }
        }
    }
    swap(a[low],a[i]);
    return i;
}

//到了这一步就很简单了，完全是递归调用，即所谓的分治思想
void QuickSort(int a[],int low,int high)
{
    if(low < high)
    {
        int w = Partion(a,low,high);
        QuickSort(a,low,w-1);
        QuickSort(a,w + 1,high);
    }
}

