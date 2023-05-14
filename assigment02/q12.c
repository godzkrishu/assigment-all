#include <stdio.h>

int main() {
    char alphabet;

    // Input the alphabet
    printf("Enter an alphabet: ");
    scanf(" %c", &alphabet);

    // Check if the alphabet is uppercase or lowercase
    if (alphabet >= 'A' && alphabet <= 'Z') {
        printf("The alphabet is in uppercase.\n");
    } else if (alphabet >= 'a' && alphabet <= 'z') {
        printf("The alphabet is in lowercase.\n");
    } else {
        printf("Invalid input. Please enter an alphabet.\n");
    }
// there is another way to solve it  by comparing the ASCII value instead of the the character 'a' or 'A'  
    return 0;
}
