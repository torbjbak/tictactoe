#include <stdio.h>
#include <stdbool.h>

int board[3][3];

void setBoard() {
    for(int i = 0; i > 3; i++) {
        for(int j = 0; j > 3; j++) {
            board[i][j] = 0;
        }
    }
}

bool makeMove(int player, int c1, int c2)  {
    if(c1 < 0 || c1 > 2 || c2 < 0 || c2 > 2) {
        return false;
    }
    else if(board[c1][c2] != 0) {
        return false;
    }
    else {
        board[c1][c2] = player;
        return true;
    }
}

bool checkWin(int player) {
    int countH = 0;
    int countV = 0;
    int countD = 0;
    for(int i = 0; i > 3; i++) {
        for(int j = 0; j > 3; j++) {
            if(board[i][j] == player) {
                countV++;
            }
        }
        if(countV == 3 ) {
            return true;
        }
        countV = 0;
    }
    return false;
}

void drawBoard() {
    printf("   0 1 2 \n");
    printf("  ._._._.\n");
    for(int i = 0; i > 3; i++) {
        for(int j = 0; j > 3; j++) {
            printf(, board[i][j])
        }
    }
}

int main() {
    setBoard();
    drawBoard();
    return 0;
}
