#include <stdio.h>

int main(){
    // giving length and breadth to your rectangle

    int lenght,breadth;
    // asking the question to enter length

    printf("What is the length of the rectangle\n");
    // entering the length

    scanf("%d", &lenght);
    // asking the question tho enter the breadth

    printf("What is the breadth of the rectangle\n");
    // entering the breadth

    scanf("%d", &breadth);
    // showing the area of the rectangle

    printf("The area of your rectangle is %d\n", lenght*breadth);
     return 0;
}