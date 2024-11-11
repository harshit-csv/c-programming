#include <stdio.h>
void main (){
    int n, temp, sum = 0;
    printf("How many numbers you want to add ?\nAnswer: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("-> ");
        scanf("%d",&temp);
        sum = sum + temp;
    }

    printf("Sum = %d", sum);
}