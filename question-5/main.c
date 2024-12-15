#include <stdio.h>
#include <string.h>
#define SALESMEN 10
#define ITEMS 5     

int main() {
    char names[SALESMEN][50];
    int sales[SALESMEN][ITEMS]; 
    int totalSales[SALESMEN] = {0};
    int grandTotal = 0;
    int i, j;

    printf("Welcome to the Sales Tracker Program!\n");
    printf("You will enter sales for %d salesmen across %d items.\n\n", SALESMEN, ITEMS);

    for (i = 0; i < SALESMEN; i++) {
        // Input salesman's name
        printf("Enter the name of salesman %d: ", i + 1);
        while (getchar() != '\n'); // Clear buffer before fgets
        fgets(names[i], 50, stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // Remove newline

        // Input sales for each item
        printf("Enter sales for %d items for %s:\n", ITEMS, names[i]);
        for (j = 0; j < ITEMS; j++) {
            printf("Item %d: ", j + 1);
            while (scanf("%d", &sales[i][j]) != 1) {
                printf("Invalid input. Please enter a valid number: ");
                while (getchar() != '\n'); // Clear invalid input
            }
            totalSales[i] += sales[i][j];
        }
        grandTotal += totalSales[i];
    }

    // Print the sales table
    printf("\n%-15s%-10s%-10s%-10s%-10s%-10s%-15s\n", 
           "Name", "Item1", "Item2", "Item3", "Item4", "Item5", "TotalSales");
    printf("---------------------------------------------------------------------------------\n");

    for (i = 0; i < SALESMEN; i++) {
        printf("%-15s", names[i]);
        for (j = 0; j < ITEMS; j++) {
            printf("%-10d", sales[i][j]); 
        }
        printf("%-15d\n", totalSales[i]);
    }

    // Print grand total
    printf("\nGrand Total: %d\n", grandTotal);

    return 0;
}