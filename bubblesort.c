#include<stdio.h>

int main()
 {
    int array[5];
    
    printf("Enter your array: ");
    for(int i = 0; i < 5; i++) 
    {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 5 - 1; i++) 
    {
        for(int j = 0; j < 5 - i - 1; j++) 
        {
            if(array[j] > array[j + 1]) 
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted array is: ");
    for(int i = 0; i < 5; i++) 
    {
        printf("%d ", array[i]);
    }

    return 0;
}
