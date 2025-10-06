# include<stdio.h>
int main(){
    float radius ;
    printf("Enter your radius : ");
    scanf("%f",&radius);
    float ar = (radius * radius * 22);
    float  area= ar/7;
    printf("Area Of circle is :%f", area);

    return 0;

}