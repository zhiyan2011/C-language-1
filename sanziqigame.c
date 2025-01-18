
#include "sanziqi.h"
void initboard(char board[ROW][COL], int row, int col)
{
int i =0;
int j =0;
for (i=0;i<row;i++)
{
   for (j=0;j<col;j++)
     {
      board[i][j]=' ';
     }
}

}
// display board
void displayboard(char board[ROW][COL],int row, int col)
{
int i =0;
int j =0;
for (i=0;i<row;i++)
{
    int j =0;
    for (j=0;j<col;j++)
    {
    printf(" %c ", board[i][j]);
    if (j<col-1)
    printf("|");
    }
    printf("\n");
    if (i<row-1)
    {
        int j=0;
        for (j=0;j<col;j++)
        {
          printf("---");
           if (j<col-1)
          printf("|");
        }
    }
    printf("\n");
}
}

// palyer play
void Playermove(char board[ROW][COL], int row, int col)
{
    int x=0;
    int y=0;
    printf("you play:\n");
    while(1)
    {
        printf(" pls you choose a place:");
        scanf("%d %d", &x,&y);
       if (x>=1 && x <= row && y>=1 && y<= col)
       {
         if (board[x-1][y-1] ==' ')
           {
             board [x-1][y-1] = '*';
             break;
           }  
         else
           {
            printf("place is occupied, pls enter again.");
           }
       }
      else
      {
         printf("incorrect enter, pls enter again:");
      }
    }

}
// computer move
void Computermove(char board[ROW][COL], int row, int col)
{
    printf("computer play:\n");
    int x=0;
    int y=0;
    while(1)
    {
       x = rand()%row;//0~row-1
       y = rand()%col;//0~col-1
         if (board[x][y] ==' ')
           {
             board [x][y] = '#';
             break;
           }  
    }

}
// return 1 show full
//return 0 show not full
int is_Full(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i=0; i<row; i++)
    {
     for (j=0;j< col; j++)
    {
        if (board[i][j]==' ')
          return 0;
    }
    }
          return 1;
}
// check who is winner
char is_win(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    int count =0;
    char player;
    //check row
    for (i=0;i<row;i++)
    {
        count = 0;
        player = board[i][0];
        for (j=0;j<col;j++)
        {
          if (board[i][j] == player && player!=' ')
          {
             count ++;
             if (count == wincount)
             {
              return player;
             }
          }
           else
          {
            count =0;
            player = board[i][j];
          }
             
        }
        
    } 
    //check colum
     for (j=0;j<col;j++)
    {
        count = 0;
      player = board[0][j];
        for (i=0;i<col;i++)
        {
          if (board[i][j] == player && board[i][j]!=' ')
          {
             count ++;
             if (count == wincount)
             {
              return player;
             }
          }
        else
          {
            // count 重新计数
            count = 0;
            // 重新选择新的计数起点
            player = board[i][j];
          } 
        } 
    } 
    // check main对角线
    for (i = 0;i <= row-wincount; i++)//防止数组溢出用了row-wincount
    {
      for (j=0;j<=col-wincount;j++)
       {
          count = 1;
          player = board[i][j];
          for (int k =1 ;k < wincount; k++)
          {
            if (board[i+k][j+k]== player && board[i][j] != ' ')
            {
                 count ++;
                  if (count== wincount)
                 {
                   return player;
                 }
             }
          }
       }
    }
    // check side diag
    for (i=0;i<=row-wincount;i++)
    {
      for (j = wincount-1;j<col;j++)
      {
        count = 1;
        player = board[i][j];
        for (int k =1; k < wincount; k++)
        {
           if (board[i+k][j-k]== player && board[i][j] != ' ')
           {
            count++;
             if (count == wincount)
             {
             return board[i][j];
             }
           }

        }
      }

    }
    if (is_Full(board, row, col))
       return 'Q';

       return 'C';
}
     

