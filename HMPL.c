#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void Welcome_interface(void);
int game(void);
int random_number(void);
void rules(void);
int main(void) 
{
    Welcome_interface();
    rules();
    int a = 0;
    while (1)
    {
        if (game() == 1)
        {
            a = game();
        }
        else if (a != 1)
        {
            break;
        }
    }
    
    return 0;
}




//用于生成随机数的函数
int random_number(void)
{
    int num = 0;
    srand(time(0));  // 使用当前时间作为随机数种子
    num = rand() % 100 + 1;  // 生成 1~100 的随机数
    return num;
}


//游戏主要部分
int game(void)
{
    printf("开始游戏!\n");
    int num1 = random_number();
    int user_scanf = 0;

    scanf("%d", &user_scanf);
    //进行一个条件判断
    while (1)
    {
        if (user_scanf < num1)
        {
            printf("你输入的数太小了\n");
            scanf("%d", &user_scanf);
        }
        else if (user_scanf > num1)
        {
            printf("你输入的数太大了\n");
            scanf("%d", &user_scanf);
        }
        else
        {
            printf("挑战成功\n");
            printf("是否再来一轮?");
            break;
        }
    }
    printf("再来一轮输入1,结束输入2\n");
    int x = 0;//x在这里用于判断
    scanf("%d", &x);
    return x;
}

void Welcome_interface(void)
{
    printf("W E L C O M E\n");
}


void rules(void)
{
    printf("程序会生成一个1~100之间的随机数,需要玩家输入自己猜测的数字,直到猜对为止\n");
}
