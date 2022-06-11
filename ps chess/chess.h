#include <stdio.h>
#include <math.h>

int currentTurn = 1;
int board[8][8] = {
    {2,4,3,5,6,3,4,2},
    {1,1,1,1,1,1,1,1},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {1,1,1,1,1,1,1,1},
    {2,4,3,5,6,3,4,2}
};
int blackWhite[8][8] = {
    {2,2,2,2,2,2,2,2},
    {2,2,2,2,2,2,2,2},
    {2,2,2,2,2,2,2,2},
    {1,1,1,2,2,2,2,2},
    {2,2,2,2,2,2,2,2},
    {2,2,2,2,2,2,2,2},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1}
};
int moves[8][8];

int getValidMoves(int x, int y){
    int canMove = 1;
    moves[y][x] = 2;
    if(x > 7 || x < 0 || y > 7 || y < 0)
        return 1;
    if(piece == 0){
        return 1;  
    }
    void towerMoves(){
         for(int dir = -1; dir < 2; dir+=2){
            int count = 1;
            while(1){
                if(x+(count*dir) <= 7 && x+(count*dir) >= 0){
                    if(board[y][x+(count*dir)] != 0){
                        if(blackWhite[y][x+(count*dir)] != color){
                            moves[y][x+(count*dir)] = 3; 
                            canMove = 0;
                        }
                        break;
                    }else{
                        moves[y][x+(count*dir)] = 1;
                        canMove = 0;
                    }
                }else{
                    break;
                }
                count++;
            }
            count = 1;
        }
    }
