#include<iostream>
using namespace std;

int main()
{
    int array[5];
    cout << " enter your array :";
    for(int i = 0; i<5; i++)
    {
        cin >> array[i];
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
    for(int i =0;i<5;i++)
    {
        cout<< array[i] << " ";
    }
}