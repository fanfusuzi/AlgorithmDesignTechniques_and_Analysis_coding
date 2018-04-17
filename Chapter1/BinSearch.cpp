//
// Created by andrew on 18-4-17.
//

#include "BinSearch.h"


int BinSearch(int a[],int len,int k)
{
    int start = 0;
    int end = len;
    int j = 0;
    while(start <= end && j == 0)
    {
        int mid = (start + end)/2;
        if(a[mid] == k)
        {
            j = mid;
        }
        else if(a[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return j;
}