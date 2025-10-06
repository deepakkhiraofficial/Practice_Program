#include <stdio.h>

int main() {
  int a [5] = {1,2,3,5};
  int val, pos;
  printf("Enter value you want to insert");
  scanf("%d",&val);
  printf("Enter Position or index ");
  scanf("%d",&pos);
  
  for(int i=5; i>=pos; i--){
      a[i+1] = a[i];
      
  }
  a[pos]= val;
  for(int i =0; i<5; i++){
      printf("%d\n",a[i]);
  }
  return 0;
}