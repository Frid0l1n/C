#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void draw_grid(char grid[3][3]);
int check_winner(char grid[3][3]);
int is_all_same(char grid[3]);
void try_play(char grid[3][3]);

int main()
{
    srand(time(0)); // Set seed for random number generation

    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int currentPlayer = 1;

    printf("tictactoe\n");

    while (1)
    {
        draw_grid(board);
        int coordinate0;
        char coordinate1;
        printf("enter coordinates: ");
        scanf("%d %c", &coordinate0, &coordinate1);
        coordinate1 = toupper(coordinate1);
        if (board[coordinate0 - 1][(int)(coordinate1 - 'A')] == ' ')
        {
            // board[coordinate0 - 1][(int)(coordinate1 - 'A')] = (currentPlayer == 1) ? 'o' : 'x'; // ternary operator
            // currentPlayer = !currentPlayer;

            board[coordinate0 - 1][(int)(coordinate1 - 'A')] = 'x';

            if (check_winner(board))
            {
                draw_grid(board);
                printf("[94;5;1mA user won!!!\n");
                return 0;
            }

            try_play(board);
        }
        else
        {
            printf("Cell already occupied. Try again.\n");
            continue;
        }
    }
}

int check_winner(char grid[3][3])
{
    // Rows
    for (int i = 0; i < 3; i++)
    {
        if (is_all_same(grid[i]))
        {
            return 1;
        }
    }
    // Columns
    for (int i = 0; i < 3; i++)
    {
        char column[] = {grid[0][i], grid[1][i], grid[2][i]};
        if (is_all_same(column))
        {
            return 1;
        }
    }
    // Diagonals
    char diagonal0[] = {grid[0][0],
                        grid[1][1],
                        grid[2][2]};
    char diagonal1[] = {grid[0][2],
                        grid[1][1],
                        grid[2][0]};
    if ((is_all_same(diagonal0)) || (is_all_same(diagonal1)))
    {
        return 1;
    }
}

int is_all_same(char grid[3])
{
    for (int i = 0; i < 3 - 1; i++)
    {
        if (grid[i] != grid[i + 1])
        {
            return 0;
        }
    }
    return (grid[0] == ' ') ? 0 : 1;
}

void try_play(char grid[3][3])
{
    sleep(rand() % 3);
    int x = rand() % 3;
    int y = rand() % 3;
    if (grid[x][y] == ' ')
    {
        grid[x][y] = 'o';
    }
    else
    {
        try_play(grid);
    }
}

void draw_grid(char grid[3][3])
{
    int i;
    for (int i = 0; i < 3; i++)
    {
        printf("%c ¦ %c ¦ %c\n", grid[i][0], grid[i][1], grid[i][2]);
        if (i != 2)
        {
            printf("---------\n");
        }
    }
    return;
}