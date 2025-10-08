// A do while loop program for a password log in
/*
Name:methoJAMES KITHUKA 
Reg No:CT101/G/26564/25
Date:8 Oct 2025
*/

#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "1234";
    char input[50];

    do {
        printf("Enter password: ");
        scanf("%s", input);
    } while (strcmp(input, password) != 0);

    printf("Access Granted.\n");
    
    return 0;
}