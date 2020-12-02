#include <stdio.h>

int main(){
    // giving value for simple interest

    int principal=100, rate=4, year=1;
    // giving formula of simple interest

    int simpleInterest = (principal*rate*year)/100;
    // showing the output
    
    printf("The simple interest is %d", simpleInterest);
     return 0;
}