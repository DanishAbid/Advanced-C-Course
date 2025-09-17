#include <stdio.h>

int arr[10] = {7, 6, 2, 9, 0, 8, 4, 3, 5, 1};

//#define SWAP(a, b)  {int temp = a; a=b; b=temp;}

int swap(int list[10], int i, int j);

int main(){

    for (int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++)
    {
        for(int j=0; j<(sizeof(arr)/sizeof(arr[0])); j++)
        {
            if(arr[i] > arr[j])
            {
                //SWAP(arr[i], arr[j]);
                swap(arr, i, j);
            }
        }
    }

    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}

int swap(int list[10], int i, int j)
{
    int temp;
    temp = list[i];
    list[i] = list[j];
    list[j] = temp;

    return list;
}