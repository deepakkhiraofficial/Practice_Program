# include <stdio.h>
int main(){
    float num, cube;
    printf("Enter a number: ");
    scanf("%f", &num);
    cube = num * num *num;
    printf("Cube of %.2f is %.2f\n", num, cube);
}