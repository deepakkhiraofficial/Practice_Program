# include <stdio.h>
int main(){
    int num,digit,reverseValue=0;
    printf("Enter the value : ");
    scanf("%d",&num);

    while(num>0){
         digit = num%10;
        reverseValue = reverseValue*10+digit;
        num=num/10;
    }
    printf("The reverse of the value is : %d ",reverseValue);
    return 0;
}