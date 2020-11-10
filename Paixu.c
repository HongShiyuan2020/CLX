#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int i,j,temp;
    int a[10];
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        a[i] = rand()%90+10;
    }
    
    for (i = 0; i < 10; i++)
    {
        printf("%4d",a[i]);
    }
    

    // 选择排序
    // for ( i = 0; i < 9; i++)
    // {
    //     for (j = i+1; j < 10; j++)
    //     {
    //         temp = a[i];
    //         if (a[i] > a[j])
    //         {
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
            
    //     }
        
    // }

    //冒泡排序
    printf("\n");
    // for ( i = 0; i < 9; i++)
    // {
    //     for (j = 0; j < 9-i; j++)
    //     {
    //         temp = a[j];
    //         if (a[j] > a[j+1])
    //         {
    //             a[j] = a[j+1];
    //             a[j+1] = temp;
    //         }
            
    //     }
        
    // }

    //插入排序
    for ( i = 1; i < 10; i++)
    {
        for ( j = i; j > 0; j--)
        {
            temp = a[j];
            if (a[j] < a[j-1])
            {
                a[j] = a[j-1];
                a[j-1] = temp;
            }
            
        }
        
    }
    
    
    for (i = 0; i < 10; i++)
    {
        printf("%4d",a[i]);
    }
    

    return 0;
}
