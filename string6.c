#include<stdio.h>
int occurance(char st[], char c){
    char *ptr = st;
    int count = 0;
    while(*ptr!='\0'){
        if(*ptr==c){
            count++;
        }
        ptr++;
    }
    return count;
}
 int main(){
    char st[] = "aparnapaliya";
    int count = occurance(st, 'a');
    printf("occurance = %d", count);
    return 0;
}