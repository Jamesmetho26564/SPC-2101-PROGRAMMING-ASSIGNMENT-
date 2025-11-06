/* 
Name:METHO JAMES KITHUKA
Reg no:CT101/G/26564/25
Description :Students examination store file
*/

//Header files 
#include <stdio.h>
#include <stdlib.h>
//Declaration of variables
struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main(void) {
    FILE *fp;
    struct Student s;
    int n, i;

    // Open binary file for writing
    fp = fopen("results.dat", "wb");
    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }
//Ask user to enter number of students 
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        fgets(s.name, sizeof(s.name), stdin);
        s.name[strcspn(s.name, "\n")] = '\0'; // create a new line
//user to enter reg number
        printf("Enter registration number: ");
        fgets(s.regNo, sizeof(s.regNo), stdin);
        s.regNo[strcspn(s.regNo, "\n")] = '\0'; // Create a new line
        
//Ask user to enter total marks scored by a partichstudent 
        printf("Enter total marks: ");
        scanf("%f", &s.totalMarks);
        getchar();

        fwrite(&s, sizeof(struct Student), 1, fp);
    }
//file closing 
    fclose(fp);
    printf("\nData successfully written to results.dat\n");
    return 0;
}