# include <stdio.h>

int main(){
    float Length,Width,Perimeter;

    printf(" Enter Length : ");
    scanf("%f",&Length);
    
    printf(" Enter Width : ");
    scanf("%f",&Width);
    
    Perimeter = 2*(Length+Width);

    printf(" Perimeter of Rectangle is : %f \n",Perimeter);
    return 0;

}