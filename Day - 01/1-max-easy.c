#include <stdio.h>
void main (){
    int a , b, c, d;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c, &d);

    int max = a;
    if(max < b) max = b;
    if(max < c) max = c;
    if(max < d) max = d;

    printf("Largest = %d", max);

}




How many numbers you want to add ?
Answer: 5

12
3
7
26
24

Sum = 72





*/