#include <stdio.h>
#include <stdlib.h>

int main()
{
    int magic, guess, counter;
    magic = rand() % 100 + 1;
    counter = 0;
    do {
        printf("������һ������:");
        scanf_s("%d", &guess);
        counter++;
        if (guess > magic)
        {
            printf("����̫��\n");
        }
        else if (guess < magic)
        {
            printf("����̫С��\n");
        }
        else
        {
            printf("��ȷ��\n");
            printf("��������ǣ�%d\n", magic);
        }
    } while (guess != magic);
    printf("�û��µĴ����ǣ�%d \n", counter);
    return 0;
}

