//
// Created by andrew on 18-4-17.
//

#include "InsertionSort.h"



void InsertionSort(int a[],int n)
{
    for(int i = 2;i <= n;i ++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 1 && a[j] > temp)
        {

            a[j + 1] = a[j];
            j --;

        }
        a[j + 1] = temp;
    }
}