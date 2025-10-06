
#include<stdio.h>

int main(){
    int arr [] = {1,0,2,2,8,3,4,5,6,8,9};
        int largest = arr[0];
        int smallest;
            int len  = sizeof(arr)/sizeof(arr[0]);
        printf("%d",len);
        for(int i = 0; i<len;i++){

            if(arr[i]<largest){
                largest = arr[i];
            }else{
                smallest = arr[i];
            }
        }

        printf(" Arrays of smallest number is : %d\n Largest number is : %d\n",largest,smallest);
}


