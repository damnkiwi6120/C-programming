#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int size, int arr[]) {
    int temp = 0;
    for(int i = 0; i < size - 1; i++){
        if(arr[i] > arr[i + 1]){
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    if(size != 2)
        bubbleSort(size - 1, arr);
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
    bubbleSort(i, arr);
    for(int j = 0; j < i; j++){
        printf("%d", arr[j]);
        if(j != i - 1)
            printf(" ");
        else
            puts("");
    }
    return 0;
}
