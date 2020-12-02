#include <stdio.h>

int main(){
    // creating two variable
    int a, b;
    // displaying the variables with instructions
    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);
    
    printf("The sum of a and b %d", a+b);
    return 0;
}