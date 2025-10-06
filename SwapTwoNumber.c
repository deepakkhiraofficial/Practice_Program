#include <stdio.h>
int main(){
    int a ,b;
    printf("Enter swap number:..");
    scanf("%d %d", &a, &b);

    printf("Before swap number %d %d ",a ,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swap number %d %d ",a ,b);


}