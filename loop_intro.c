#include<stdio.h>

 int main(){
    int a;
    scanf("%d", &a);
    while(a<10){
        printf("%d\n", a);
        a++;
        // a = 11;
        // while(a>10) --> these two lines will lead to an infinite loop
    }
    return 0;
}