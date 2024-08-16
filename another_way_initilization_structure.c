#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
 int main(){
    struct employee Aparna = {100, 34.23, "Aparna"};

    printf("code is :  %d \n", Aparna.code );
    printf("salary is : %f \n", Aparna.salary );
    printf("name is : %s \n", Aparna.name );

   
    return 0;
}