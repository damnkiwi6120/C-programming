#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linearSearch(int goal, int size, int arr[], int i) {
    if(i > size - 1)
        return -1;
    else if(goal == arr[i])
        return i;
    else
        return linearSearch(goal, size, arr, ++i);
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

    int goal = 0;
    printf("Enter search goal 1~100: ");
    scanf("%d", &goal);
    printf("result = %d(array index)\n", linearSearch(goal, i, arr, 0));
    return 0;
}
