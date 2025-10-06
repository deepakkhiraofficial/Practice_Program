# include <stdio.h>
int main(){
    printf("Enter array of length : ");
    int ln;
    scanf("%d",&ln);
    int arr[ln];
    for(int i = 0; i<ln;i++){
        printf("Enter %d number",arr[i]);
        scanf("%d",&arr[i]);
    }
    printf("Array elements are : ");
    for(int i = 0; i<ln;i++){
        printf("%d ",arr[i]);
    }
    return 0;     
}