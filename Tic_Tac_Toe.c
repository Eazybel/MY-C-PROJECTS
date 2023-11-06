#include <stdio.h>

// Function to display the Tic-Tac-Toe board
void display_board(char board[3][3]) {
    printf("-------------\n");
    for (int i = 0; i < 3; i++) {
        printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
        printf("-------------\n");
    }
}

// Function to check if a player has won the game
int check_win(char board[3][3], char player) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
    }
    
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    
    return 0;
}

// Function to play the Tic-Tac-Toe game
void play_game() {
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    char current_player = 'X';
    int row, col;
    
    int moves = 0;
    int game_over = 0;
    
    while (!game_over) {
        display_board(board);
        
        // Get the player's move
        printf("Player %c, enter your move (row [0-2] and column [0-2]): ", current_player);
        scanf("%d %d", &row, &col);
        
        // Check for valid move
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }
        
        // Make the move
        board[row][col] = current_player;
        moves++;
        
        // Check if the current player has won
        if (check_win(board, current_player)) {
            display_board(board);
            printf("Player %c wins!\n", current_player);
            game_over = 1;
        }
        
        // Check for a draw
        if (moves == 9 && !game_over) {
            display_board(board);
            printf("It's a draw!\n");
            game_over = 1;
        }
        
        // Switch to the other player
        if (!game_over) {
            current_player = (current_player == 'X') ? 'O' : 'X';
        }
    }
}

// Main function
int main() {
    printf("Tic-Tac-Toe\n");
    printf("Player X - You\n");
    printf("Player O - Computer\n");
    printf("Let's play!\n");
    
    play_game();
    
    return 0;
}
