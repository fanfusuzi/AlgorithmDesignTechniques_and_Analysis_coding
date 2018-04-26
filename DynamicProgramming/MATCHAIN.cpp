//
// Created by andrew on 18-4-25.
//

/**
 * 本算法用来实现计算矩阵链的最小乘次数
 *
 * 其中输入为一个矩阵，下表为1到n+1
 * 其中1到n为每个矩阵的行数，n+1为最后一个矩阵的列数
 */
#include "MATCHAIN.h"
#include <stdio.h>
int N[101][101] = {0};

int min(int a,int b)
{
    return a <= b? a:b;
}
int MatChain(int a[],int n)
{
    //对于一个三角阵，首先应该把矩阵的主对角线置为0
    for(int i = 1;i <= n;i ++)
        N[i][i] = 0;

    for(int d = 1; d <= n - 1; d++)
        for(int i = 1;i <= n - d;i ++)
        {
            int j = i + d;

            N[i][j] = 9999999;

            for(int k = i + 1;k <= j;k ++) {
                int tag = min(N[i][j], N[i][k - 1] + N[k][j] + a[i] * a[k] * a[j + 1]);
                N[i][j] = tag;
            }

        }

    return N[1][n];
}