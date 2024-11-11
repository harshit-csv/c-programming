#include <stdio.h>
int main (){
    int n ;
    printf("To Check Prime\nEnter the number: ");
    scanf("%d", &n);

    for (int i = 2; i < n/2; i++){
        if(n % i == 0){
            printf("Not a Prime number");
            return 0;
        }
    }
    printf("Prime number");
    return 0;
}