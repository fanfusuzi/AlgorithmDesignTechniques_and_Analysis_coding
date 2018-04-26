//
// Created by andrew on 18-4-25.
//

#include "LCS.h"


int s[100][100];
int max(int a,int b)
{
    return a > b? a:b;
}
int LSC(char a[],char b[],int n,int m)
{
     for(int i = 0;i <= n;i ++)
         s[i][0] = 0;

     for(int j = 0;j <= m;j ++)
         s[0][j] = 0;


     for(int i = 1;i <= n;i ++)
         for (int j = 1;j <= m;j ++)
         {
             if(a[i] == b[j])
                 s[i][j] = s[i-1][j-1] +1;
             else
                 s[i][j] = max(s[i-1][j],s[i][j-1]);
         }

     return s[n][m];
}