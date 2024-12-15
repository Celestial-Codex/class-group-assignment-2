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
  char playerChoice;
  char computerChoice;

  // randomly compute computer's choice
  srand(time(NULL));
  int randomChoice = rand() % 3;

  if (randomChoice == 0) {
    computerChoice = 'S';
  } else if (randomChoice == 1) {
    computerChoice = 'K';
  } else {
    computerChoice = 'P';
  }

  printf("Welcome to Stone Knife Paper.\nEnter S for Stone, K for Knife, or P "
         "for Paper (Ensure Caps Lock is on).\n");
  printf(">>> ");

  scanf("%c", &playerChoice);

  if (playerChoice == computerChoice) {
    printf("Its a tie\n");
  } else if ((playerChoice == 'S' && computerChoice == 'K') ||
             (playerChoice == 'K' && computerChoice == 'P') ||
             (playerChoice == 'P' && computerChoice == 'S')) {
    printf("You win 🥳");
  } else {
    printf("You loose 😥");
  }
  printf("Computer's choice was %c.\n", computerChoice);
  return 0;
}
