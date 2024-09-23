#include <stdio.h>  

int main() {  
    // 定义一个3行4列的整型二维数组 
    int row,col; 
    row=10;
    col=9;
    int a[row][col];
    for (int i = 0; i < row-1; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (j == i - 1)
            {
                a[i][j] = 0;
            }
            else
            {
                a[i][j] = 1;
            }
        }
    }

    for(int coll=0;coll<col;++coll)
    {
        a[9][coll]=1;
    }

    for(int i=0;i<10;++i)
    {
        for(int j=0;j<9;++j)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }  
    return 0;  
}