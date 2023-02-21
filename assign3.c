// ASCII Chracters

#include<stdio.h>

int main(){
    int i=0;
    printf("ASCII value of \n");

    while(i<=255){
        printf("%d is %c\t\t", i, i);
        i++;
    }
    return 0;
}