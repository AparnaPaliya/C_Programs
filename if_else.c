#include<stdio.h>

 int main(){
    int age;
      printf("enter your age\n");
    scanf("%d", &age);
   if(age>=90){
      printf("You are above 90,you can not drive");
    }
    else{
       printf("you can drive\n");
    }
   if(age==50){
       printf("Half century\n");}

      return 0;
}