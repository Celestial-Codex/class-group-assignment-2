#include <stdio.h>
#include <string.h>

// Constants for the number of salesmen and items
#define SALESMEN 10
#define ITEMS 5

int main() {

  char names[SALESMEN][50];
  int sales[SALESMEN][ITEMS];
  int totalSales[SALESMEN] = {0};
  int grandTotal = 0;
  int i, j;

  printf("Welcome to the Sales Tracker Program!\n");
  printf("This program will record sales for %d salesmen and %d items.\n\n",
         SALESMEN, ITEMS);

  for (i = 0; i < SALESMEN; i++) {

    printf("Enter the name of salesman %d: ", i + 1);

    scanf("%49s", names[i]);

    names[i][strcspn(names[i], "\n")] = '\0';

    printf("Enter sales for %d items for %s:\n", ITEMS, names[i]);
    for (j = 0; j < ITEMS; j++) {
      printf("Item %d: ", j + 1);

      scanf("%d", &sales[i][j]);

      totalSales[i] += sales[i][j];
    }

    grandTotal += totalSales[i];

    while (getchar() != '\n')
      ;
  }

  printf("\nName\t\t\tItem1\tItem2\tItem3\tItem4\tItem5\tTotalSales\n");
  printf("-------------------------------------------------------------\n");

  for (i = 0; i < SALESMEN; i++) {
    printf("%s\t\t\t", names[i]);
    for (j = 0; j < ITEMS; j++) {
      printf("%d\t", sales[i][j]);
    }
    printf("%d\n", totalSales[i]);
  }

  printf("\nGrand Total: %d\n", grandTotal);

  return 0;
}
