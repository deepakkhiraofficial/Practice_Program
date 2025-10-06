#include<stdio.h>
int main(){
    int n1 = 0, n2 = 1, nextTerm, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if(n ==0){
        printf("No terms to display");
    }else if(n == 1){
        printf("Fibonacci Series: %d", n1);
    }else{
        printf("Fibonacci Series: %d, %d, ", n1, n2);
        for(int i = 1;i<=n-2;i++){
            nextTerm = n1+n2;
            printf("%d, ", nextTerm);
            n1 = n2;
            n2  = nextTerm;
        }
    }
    return 0;
}