#include<stdio.h>

 int main(){
    // char str[] = {'A', 'P', 'A', 'R', 'N', 'A', '\0'};
    char str[] = "APARNA";
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}