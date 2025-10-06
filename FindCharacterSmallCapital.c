#include <stdio.h>
int main(){
    printf(" Enter Character:");

    char ch  = scanf("%c",&ch);

        void Find_Character_Small_Capital(int ch){
           if(ch >= 65 && ch <= 90){
                printf("Capital Character %c");
            }else if(ch >= 97 && ch <= 122){
                printf("Small Character %c");
            }
            else{
                printf("Not an Alphabet %c",ch);
            }
        }

    Find_Character_Small_Capital(ch);
    return 0;
}