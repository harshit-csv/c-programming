#include <stdio.h>
void main (){
    int a , b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){
        printf("Largest = %d", a);
    }
    else if (b > c){
        printf("Largest = %d", b);
    }
    else{
        printf("Largest = %d", c);
    }

}