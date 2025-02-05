#include<stdio.h>

int main() {
    float a = 3.14;
    
    // Print the initial value of a
    printf("Initial value: %f\n", a);
    
    // Take user input for a
    printf("Enter a new value for a: ");
    scanf("%f", &a);
    
    // Print the updated value of a
    printf("You entered: %f\n", a);
    
    return 0;
}
