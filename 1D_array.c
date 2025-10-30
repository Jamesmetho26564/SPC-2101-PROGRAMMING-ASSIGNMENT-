/*
Name:METHO JAMES KITHUKA 
reg no: CT101/G/26564/25
Date: 30 October 2025
Description: C program for 1D array revenue 
*/
#include<stdio.h>

int main() {
    int revenue[7];
    char *days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int totalRevenue = 0;
    float averageRevenue;

    printf("=== Weekly Revenue Tracker ===\n");

    for(int i = 0; i < 7; i++) {
        printf("Enter revenue for %s: ", days[i]);
        scanf("%d", &revenue[i]);
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7.0;

    printf("\n--- Revenue Summary ---\n");
    for(int i = 0; i < 7; i++) {
        printf("%s: %d\n", days[i], revenue[i]);
    }

    printf("\nTotal Weekly Revenue: %d\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n", averageRevenue);

    return 0;
}