#include<stdio.h>
int main()
{
    int array[5];
    printf(" enter your array :");
    for(int i = 0; i<5; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int i = 0;i<5-1; i++)
    {
        int min = i;
        for(int j= i+1;j<5;j++)
        {
            if(array[j]<array[min])
            {
                 min = j;
            }
        }
        int temp = array[i];
        array[i]= array[min];
        array[min]= temp;
    }
    printf("sorted array is :");
    for(int i =0;i<5;i++)
    {
        printf("%d ",array[i]);
    }
}
