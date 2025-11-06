/*
Name:METHO JAMES KITHUKA
Reg no:CT101/G/26564/25
Description :A program to keep a record of borrowed books from the local library 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to remove newline characters
void trim_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
}

// Function to handle book title entry
void enterBooks() {
    FILE *file;
    char title[100];
    int emptyCount = 0; // counts consecutive blank entries

    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter book titles below.\n");
    printf("(Press ENTER twice to stop.)\n\n");
//While loop
    while (1) {
        printf("Book title: ");
        fgets(title, sizeof(title), stdin);
        trim_newline(title); // remove newline character
//conditions
        if (strlen(title) == 0) {
            emptyCount++;
            if (emptyCount >= 2)
                break; // Exit if user presses Enter twice
            else
                continue;
        } else {
            emptyCount = 0; // reset counter if user enters text
        }

        fprintf(file, "%s\n", title);
        printf("✔ Title successfully stored.\n");
    }

    fclose(file);
    printf("\nAll titles saved to borrowed_books.txt.\n");
}

int main() {
    enterBooks(); 
    return 0;
}