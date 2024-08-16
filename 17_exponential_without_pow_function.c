#include<stdio.h>

int main(){
    // Here m is The Base Number and n is The Power
    int m =2;
    int n =5;
    long long int val =1; // We used "long long int val" to calculate bigger numbers 
    
    for (int i = 0; i < n; i++) 
    {
        val = val * m; // Updating the number 
    }
    
    printf("The value of %d to the power %d is %lld", m, n, val); // Here %lld is the long long value
 
    return 0;
}