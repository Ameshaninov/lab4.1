#include <stdio.h>
#include <stdlib.h>
 
int intCmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
 
#define ARR_SIZE 10
 
int main(void){
    int arr[ARR_SIZE] = { 3, 2, 2, 4, 6, 1, 4, 8, 5, 4 }, i;
    
    printf("All: ");
    for ( i = 0; i < ARR_SIZE; ++i )
        printf("%d ", arr[i]);
    printf("\n");
    
    qsort(arr, ARR_SIZE, sizeof(int), intCmp);
    
    printf("Unique: %d ", arr[0]);
    for ( i = 1; i < ARR_SIZE; ++i )
        if ( arr[i] != arr[i-1] )
            printf("%d ", arr[i]);
    printf("\n");
    
    exit(0);
}