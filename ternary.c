#include<stdio.h>

 int main(){
    int a;
    printf("Enter a\n");
    scanf("%d", &a);
    //one liner
    (a<5) ? printf("A is less than 5") : printf("A ia not less than 5");
    return 0;
}