#include<stdio.h>
#include"sanziqi.h"
#include"sanziqigame.c"

// print the game menu
void print()
{
printf("*********************\n"); 
printf("***0. game exist*****\n"); 
printf("***1. enter game*****\n"); 
printf("*********************\n");  
}

void game()
{
    char ret =' ';
    char board[ROW][COL]={0};
// print board
initboard(board, ROW, COL);
// show board
displayboard(board,ROW, COL);
// play
  while(1)
 {
   Playermove(board, ROW, COL);
   displayboard(board,ROW, COL);
   ret = is_win(board, ROW, COL);
   if (ret != 'C')
     {
      break;
     }

   Computermove(board,ROW, COL);
   displayboard(board,ROW, COL);
   ret = is_win(board, ROW, COL);
   if (ret != 'C')
     {
       break;
     }
  }
  if (ret=='*')
  {
    printf("player win\n");
  }
  else if (ret=='#')
  {
    printf("player lose\n");
  }
  else
  {
    printf("平局\n");
  }
} 
int main()
{
    srand((unsigned int) time(NULL));//set random begining number
//   print the game menu
    print();

    // enter in game
    do 
    {
    int num = 0;
    printf("please enter: \n");
    scanf("%d",&num);
    if (num == 0)
    {
        printf("game exist\n");
    }
    else if (num == 1)
    {
        int x =0;
        int y =0;
        char board[ROW][COL] = {0};
        printf("enter game\n");
        game ();
    }
    else 
    {
        printf("incorrect enter, please enter again\n");
    }
    } while (1);
    return 0;
}