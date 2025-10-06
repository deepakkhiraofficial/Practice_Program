#include <stdio.h>

int main(){
    int marks;
    printf("Enter student of total marks : ..");
    scanf("%d", &marks);
    printf("%d",marks);
    
    if(100 <= marks && 90 >= marks){
        printf(" GRADE A++");
    }else if(90 < marks && 80 >= marks){
        printf(" GRADE A+");
    }else if(80 < marks && 60 >= marks){
        printf(" GRADE A");
    }else if(60 < marks && 45 >= marks){
        printf(" GRADE B");
    }else if(45 < marks && 33 >= marks){
        printf(" GRADE C");
    }else{
        printf(" GRADE F");
    }

    return 0;
}