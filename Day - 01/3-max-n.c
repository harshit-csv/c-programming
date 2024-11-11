#include <stdio.h>
void main (){
    int n, temp, max = 0;
    printf("How many numbers you want to compare ?\nAnswer: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("-> ");
        scanf("%d",&temp);
        if(temp > max) max = temp;
    }

    printf("\nLargest = %d", max);
}

/*
How many numbers you want to compare ?
Answer: 5

12
34
554
23
25

Largest = 554

*/