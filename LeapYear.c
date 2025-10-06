#include<stdio.h>

int  main(){
    printf("Enter Year : ");
  int year;
  scanf("%d",&year);
  // define function 
  void leepYear(int year){
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
      printf("Leap Year %d",year);
    }else{
      printf("Non Leap Year %d",year);
    }
  }
  // calling 
  leepYear(year);
 return 0;
}