#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
 int main(){
     goodmorning();
     
     
    return 0;
}
void goodmorning(){
    printf("Good morning Aparna\n");
     goodafternoon();
}
void goodafternoon(){
    printf("Good afternoon Aparna\n");
    goodnight();
}
void goodnight(){
    printf("Good night+ Aparna\n");

}