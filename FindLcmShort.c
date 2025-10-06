#include <stdio.h>

int main(){

    int a,b,c, lcm;
    printf("Enter three integers: ");
    // Error handling
    while(scanf("%d %d %d", &a, &b, &c) != 3 || a <= 0 || b <= 0 || c <=0){
        printf("Invalid! Enter two positive integers: ");
        while(getchar() != '\n');
    }
    
    // Find LCMw
    if(a > b && a > c){
        lcm = a;
    }else if(b > a && b > c){  
        lcm = b;
    }else{
        lcm = c;
    }   

    int max = lcm;
    for(int i = 1; i <= 10;i++){
        if(lcm % a == 0 && lcm % b == 0 && lcm % c == 0){
            break;
        }
    
       lcm  = max*i;
        
        printf("Updated LCM value is %d %d\n", lcm, i);
    }
    
    printf("LCM of %d , %d and %d is %d\n", a, b,c, lcm);
    return 0;

}