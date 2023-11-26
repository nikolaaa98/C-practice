#include <stdio.h>
#include <stdbool.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int niz[], int n){
    int i, j;
    bool temp;
    for(i = 0; i < n - 1; i++){
        temp = false;
        for(j = 0; j < n - i - 1; j++){
            if(niz[j] > niz[j + 1]){
                swap(&niz[j], &niz[j + 1]);
                temp = true;
            }       
        }

        if (temp == false)
            break;
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

/*
int main(){

    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
*/