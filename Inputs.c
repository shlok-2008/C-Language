#include<stdio.h>


int main() {
    int age;
    float pi;
    char star;
    printf("Enter age:");
    scanf("%d", &age);
    printf("Enter pi:");
    scanf("%f", &pi);
    printf("Enter star:");
    scanf(" %c", &star);
    printf("Age is %d \n", age);
    printf("Pi is %f \n", pi);
    printf("Star is %c \n", star);
    return 0;
    
}
