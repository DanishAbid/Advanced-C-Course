#include <stdio.h>

int arr[10] = {7, 6, 2, 9, 0, 8, 4, 3, 5, 1};

#define SWAP(a, b)  {int temp = a; a=b; b=temp;}

int main(){

    for (int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++)
    {
        for(int j=0; j<(sizeof(arr)/sizeof(arr[0])); j++)
        {
            if(arr[i] > arr[j])
            {
                SWAP(arr[i], arr[j]);
            }
        }
    }

    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}