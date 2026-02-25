// C Program for Stone Paper Scissor Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to implement the game
int game(char you, char computer)
{
    // If both user and computer choose same
    if (you == computer)
        return -1;

    // Stone vs Paper
    if (you == 's' && computer == 'p')
        return 0;
    else if (you == 'p' && computer == 's')
        return 1;

    // Stone vs Scissor
    if (you == 's' && computer == 'z')
        return 1;
    else if (you == 'z' && computer == 's')
        return 0;

    // Paper vs Scissor
    if (you == 'p' && computer == 'z')
        return 0;
    else if (you == 'z' && computer == 'p')
        return 1;

    return -1;
}

int main()
{
    int n;
    char you, computer;
    int result;

    srand(time(NULL));
    n = rand() % 100;

    // Assign computer choice
    if (n < 33)
        computer = 's';   // Stone
    else if (n >= 33 && n < 66)
        computer = 'p';   // Paper
    else
        computer = 'z';   // Scissor

    printf("\nEnter s for STONE, p for PAPER and z for SCISSOR: ");
    scanf(" %c", &you);

    result = game(you, computer);

    if (result == -1)
        printf("\nGame Draw!\n");
    else if (result == 1)
        printf("\nWow! You have won the game!\n");
    else
        printf("\nOh! You have lost the game!\n");

    printf("\nYou chose: %c and Computer chose: %c\n", you, computer);

    return 0;
}