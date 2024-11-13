#include <stdio.h>
void main (){

    int arr[5];

    printf("Input Numbers\n\n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nDisplaying Numbers\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

}