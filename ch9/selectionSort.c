#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int size, int arr[]) {
    int temp = 0, max = 0;
    for(int i = 1; i < size; i++)
        if(arr[i] > arr[max])
            max = i;
    temp = arr[size - 1];
    arr[size - 1] = arr[max];
    arr[max] = temp;
    if(size != 2)
        selectionSort(size - 1, arr);
}

int main(void) {
    int i;
    srand(time(NULL));
    i = (rand()%20)+1;
    int arr[i];
    for(int j = 0; j < i; j++){
        arr[j] = (rand()%100)+1;
        printf("%d", arr[j]);
        if(j != i - 1)
            printf(" ");
        else
            puts("");
    }
    puts("");
    selectionSort(i, arr);
    for(int j = 0; j < i; j++){
        printf("%d", arr[j]);
        if(j != i - 1)
            printf(" ");
        else
            puts("");
    }
    return 0;
}
