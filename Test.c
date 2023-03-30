#include <stdio.h>

int main() {
    char firstName[30];
    char lastName[30];
    printf("Enter your name : ");
    scanf("%s %s", firstName, lastName);
    printf("First Name : %s\n", firstName);
    printf("Last Name : %s\n", lastName);
    return 0;
}
