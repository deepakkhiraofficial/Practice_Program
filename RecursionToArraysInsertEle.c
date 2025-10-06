#include <stdio.h>



int main(){

    int size;
    // printf(" Enter Arrays of Size : ");
    //  scanf("%d",&size);
     int arr[2];
     void addItems(int s){
        //int i = 0;
        //int v = s;
       // int arr[v];
        int s=2;
        if(s>=0){
            printf("Enter Elements of Array : ");
            scanf("%d",&arr[s]);
            s--;
            addItems(s); 
        }
      
        // return arr[i];
     
     
    addItems(2);
    // for(int i=0;i<size;i++){
    //     printf("%d",arr[i]);
    // }
   
}
}
