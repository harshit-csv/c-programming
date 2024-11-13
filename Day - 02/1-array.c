#include <stdio.h>
int main (){

    int vowels[5];

    vowels[0] = 'a';
    vowels[1] = 'e';
    vowels[2] = 'i';
    vowels[3] = 'o';
    vowels[4] = 'u';

    // for(int i = 0; i < 5; i++){
    //     scanf("%c", &vowels[i]);
    // }


    // printf("%c ", vowels[0]);
    // printf("%c ", vowels[1]);
    // printf("%c ", vowels[2]);
    // printf("%c ", vowels[3]);
    // printf("%c ", vowels[4]);

    for(int i = 0; i < 5; i++){
        printf("%c ", vowels[i]);
    }

    return 0;
}