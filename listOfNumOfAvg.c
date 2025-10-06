#include <stdio.h>

void findAverage(){
    printf("Enter how many number to find average : ");
    int len;
    // Error handling
    while(scanf("%d",&len) != 1 || len <=0){
        printf("Invalid! Enter a positive integer:  ");
        while(getchar() != '\n');
    }
    float sum = 0.0;
    float  average = 0.0;
   
    int i=1;
    while(i<=len){
        float add;
        printf("Enter %d number ",i);
        // Error handling
        while(scanf("%f",&add) != 1){
            printf(" Enter a valid numeric value: ");
            while(getchar() != '\n');
        }; 
        sum +=add;
        i++;
    }
    average = sum/len;

     printf("Average of all numbers is : %.3f \n",average);
}

int main(){
    findAverage();
     return 0;

}