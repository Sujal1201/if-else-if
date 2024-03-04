#include <stdio.h>
#include <ctype.h>

int main() {
    char gender;
    int age;
    
    printf("\nEnter gender (M/F): ");
    scanf(" %c", &gender);
    getchar();
    
    gender = tolower(gender);
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    if (age < 0) {
        printf("\nInvalid age input.\n");
        return 0;
    }
    
    if (gender == 'm') {
        if (age >= 18) {
            printf("\nMen are eligible to vote.\n");
        } else {
            printf("\nMen are not eligible to vote.\n");
        }
    } else if (gender == 'f') {
        if (age >= 18) {
            printf("\nWomen are eligible to vote.\n");
        } else {
            printf("\nWomen are not eligible to vote.\n");
        }
    } else {
        printf("\nInvalid gender input.\n");
    }
    
    return 0;
}