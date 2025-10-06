#include <stdio.h>

int main(){
    static int x;
    x = 10;
    printf("%d \n",x); //10
    x = 20;
    printf("%d",x); //20

}