#include <stdio.h>
#include <string.h>

// Constants for the number of salesmen and items
#define SALESMEN 10
#define ITEMS 5     

int main() {
    // Arrays to store names and sales
    char names[SALESMEN][50]; // Each name can have up to 49 characters
    int sales[SALESMEN][ITEMS]; // Sales for each salesman and each item
    int totalSales[SALESMEN] = {0}; // Total sales for each salesman
    int grandTotal = 0; // Total sales for all salesmen
    int i, j; // Loop variables

    // Instructions for the user
    printf("Welcome to the Sales Tracker Program!\n");
    printf("This program will record sales for %d salesmen and %d items.\n\n", SALESMEN, ITEMS);

    // Collect data for each salesman
    for (i = 0; i < SALESMEN; i++) {
        // Ask for the salesman's name
        printf("Enter the name of salesman %d: ", i + 1);
       
        scanf("%49s",names[i]);
        // Reads a single word(up to 49 characters)
        names[i][strcspn(names[i], "\n")] = '\0';

        // Ask for sales for each item
        printf("Enter sales for %d items for %s:\n", ITEMS, names[i]);
        for (j = 0; j < ITEMS; j++) {
            printf("Item %d: ", j + 1);
            // Read the sales value
            scanf("%d", &sales[i][j]);

            // Add the sales to the total for this salesman
            totalSales[i] += sales[i][j];
        }

        // Add this salesman's total to the grand total
        grandTotal += totalSales[i];
        // Clear input buffer to prepare for next fgets
        while (getchar() != '\n');
    }

    // Display the sales table
printf("\nName\t\tItem1\tItem2\tItem3\tItem4\tItem5\tTotalSales\n");
printf("-------------------------------------------------------------\n");

// Loop through each salesman to display their sales
for (i = 0; i < SALESMEN; i++) {
    printf("%s\t\t", names[i]); // Print the name
    for (j = 0; j < ITEMS; j++) {
        printf("%d\t", sales[i][j]); // Print sales for each item
    }
    printf("%d\n", totalSales[i]); // Print the total sales
}

    // Display the grand total
    printf("\nGrand Total: %d\n", grandTotal);

    return 0; // End the program
}