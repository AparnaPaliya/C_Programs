#include<stdio.h>

 int main(){
    int x = 2;
    int y = 3;
     
    printf("The value of 3*x - 8*y is %d \n", 3*x - 8*y);
    printf("The value of 8*y / 3*x is %d \n", 8*y / 3*x );
    // 8*3 / 3*2 = 24/6 will give wrong answer
    // 24/3*2
    // 8*2
    // 16

    //write a program to determine wheather a number is divisible by 97 or not
    int num;
    printf("Enter the number \n");
    scanf("%d" , &num);
    printf("Divisibility test returns: %d\n", num%97);

    // step by step evaluation of 3*x/y-z+k
    int l =2 , m = 3 , z=3 , k=1;
    int result = 3 * l / m - z + k;
    //6/3-3+1 = 2-3+1 = 0 
    printf("The value of result is %d", result);
    return 0;
}