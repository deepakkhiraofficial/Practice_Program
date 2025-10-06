#include<stdio.h>

// GCD using Euclid's Algorithm

// GCD Function
long long GCD(long long a,long long  b){
    while(b){
        long long  temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// LCM Function
long long LCM(long long a,long long b){
    // LCM Formula and GCD Call
    return (a/GCD(a,b))*b;
}
int  main(){
    long long  a,b;
    printf("Enter two numbers: ");
    
    // Error handling
    while(scanf("%lld %lld",&a,&b) != 2 || a <=0 || b <=0){
        printf("Invalid! Enter two positive integers:  ");
        while(getchar() != '\n');
    }
    // LCM Call
    long long  lcm =  LCM(a,b);
    
    // Print LCM
    printf("LCM of %lld and %lld is %lld : ",a,b,lcm);
    return 0;
}