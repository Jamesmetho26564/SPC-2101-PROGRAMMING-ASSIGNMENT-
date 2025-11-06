/*
 Name:METHO JAMES KITHUKA
Reg no:CT101/G/26564/25
Description :shop sales 
*/
//header files we
 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *frtp;
    //variable declarations 
    char product[50];
    int quantity;
    float price;
    float totalSales = 0.0;

    // Open file for writing (replace old data)
    frtp = fopen("sales.txt", "w");
    if (frtp == NULL) {
        printf("Error: Could not open sales.txt\n");
        return 1;
    }

    printf("Enter product details.\n");
    printf("Type '0' as product name to finish.\n\n");

    // Input loop
    while (1) {
    // entering product name 
        printf("PRODUCT: ");
        scanf("%s", product);

        // stop if user enters 0
        if (strcmp(product, "0") == 0)
            break;
            
//Ask user to enter quantity 
        printf("QUANTITY: ");
        scanf("%d", &quantity);
        
//entering price of product 
        printf("PRICE: ");
        scanf("%f", &price);

        // Write to file
        fprintf(frtp, "%s %d %.2f\n", product, quantity, price);

        // Compute running total formulae
        totalSales += quantity * price;

        printf("\n");
    }

    fclose(frtp);

    // Display final total
    printf("---------------------------\n");
    printf("Total Sales Amount = Ksh%.2f\n", totalSales);
    printf("---------------------------\n");

    return 0;
}