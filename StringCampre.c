# include <stdio.h>
# include <string.h>

int main(){

    char str1 [] = "deepak";
    char str2 [] = "kushwah";

    if(strcmp(str1,str2)==0){
        return 0;
    }else{
        printf("%s and %s are not equal",str1,str2);
    }
}