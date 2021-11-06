#include <stdio.h>
#include <stdlib.h>

int main()
{
    int magic, guess, counter;
    magic = rand() % 100 + 1;
    counter = 0;
    do {
        printf("请输入一个数字:");
        scanf_s("%d", &guess);
        counter++;
        if (guess > magic)
        {
            printf("错误！太大！\n");
        }
        else if (guess < magic)
        {
            printf("错误！太小！\n");
        }
        else
        {
            printf("正确！\n");
            printf("这个数字是：%d\n", magic);
        }
    } while (guess != magic);
    printf("用户猜的次数是：%d \n", counter);
    return 0;
}

