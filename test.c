// #include "game.h"

// void menu()
// {
//     printf("*****************\n");
//     printf("***  1.play   ***\n");
//     printf("***  2.exit   ***\n");
//     printf("*****************\n");
// }

// void game()
// {
//     char mine[ROWS][COLS];
//     char show[ROWS][COLS];
//     //初始化棋盘
//     InitBoard(mine,ROWS,COLS,'0');
//     InitBoard(show,ROWS,COLS,'*');
//     DisplayBoard(show,ROW,COL);
//     SetMine(mine,ROW,COL);
//     FindMine(mine,show,ROW,COL);
// }

// int main()
// {
//     int input=0;
//     srand((unsigned int)time(NULL));
//     do
//     {
//         menu();
//         printf("请选择：>");
//         scanf("%d",&input);
//         switch (input)
//         {
//         case 1:___POSIX_C_DEPRECATED_STARTING_198808L
//         game();
//             break;
//         case 0:___POSIX_C_DEPRECATED_STARTING_198808L
//         printf("退出游戏\n");
//         break;
//         default:
//         printf("选择错误，重新开始\n");
//             break;
//         }
//         /* code */
//     } while (input);
    
//     return 0;
// }