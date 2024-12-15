/*
 * Write a C program that plays "Stone Knife Paper" game, where Stone blunts
 * Knife, Knife cuts Paper, and Paper wraps Stone. You play against the
 * computer. The program inputs the computer choice (randomly generated. 0 for S
 * (Stone), 1 for K (Knife) otherwise P (Paper)) and your choice, which is S, K
 * or P. You win if either your input Stone blunts computers’ input Knife or
 * your input Knife cuts computers’ input Paper or your input Paper wraps
 * computers’ input Stone otherwise the computer wins. If your input equals
 * computer, no one wins. Your program displays an appropriate message.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  srand(time(NULL));
  int choice = rand() % 10;
  char p1;
  char p2;
  switch (choice) {
  case 0:
    p2 = 'S';
    break;
  case 1:
    p2 = 'K';
    break;
  default:
    p2 = 'P';
    break;
  }
  printf("Welcome to Stone Knife Paper.\nEnter S for Stone, K for Knife, or P "
         "for Paper (Ensure Caps Lock is on).\n");
  printf(">>> ");
  scanf("%c", &p1);
  if (p1 == 'S') {
    if (p2 == 'K')
      printf("You win!");
    else
      printf("You lose :(");
  } else if (p1 == 'K') {
    if (p2 == 'P')
      printf("You win!");
    else
      printf("You lose :(");
  } else if (p1 == 'P') {
    if (p2 == 'S')
      printf("You win!");
    else
      printf("You lose :(");
  }
  printf("\n");
  printf("Computer's choice was %c.\n", p2);
  return 0;
}
