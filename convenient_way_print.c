#include<stdio.h>

 int main(){
    int a = 4;
    printf("%d\n", a);

     char *ptr = "Aparna Paliya"; // from this another value will print 
   // char ptr[] = "Aparna Paliya";
   ptr = "Sneha Paliya";
    printf("%s", ptr);
    return 0;
}