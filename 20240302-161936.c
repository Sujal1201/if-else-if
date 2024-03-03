#include <stdio.h>

int main() {
    char gender;
    int age;
    
    printf("\nEnter gender (M/F): ");
    scanf(" %c", &gender);
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    if (gender == 'M') {
        if (age >= 18) {
            printf("\nMales are eligible for voting.\n");
        } else {
            printf("\nMales are not eligible for voting.\n");
        }
    } else if (gender == 'F') {
        if (age >= 18) {
            printf("\nFemales are eligible for voting.\n");
        } else {
            printf("\nFemales are not eligible for voting.\n");
        }
    } else {
        printf("\nInvalid gender input.\n");
    }
    
    return 0;
}