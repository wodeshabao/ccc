#include <stdio.h>

int main()
{

    printf("欢迎进入车位管理系统\n");

    while (1)
    {
        printf("1---添加车位\n");
        printf("2---删除车位\n");
        printf("3---显示车位\n");
        printf("4---最近的车位\n");
        printf("5---退出\n");

        printf("请输入相应的功能编号\n");

        int code;
        scanf("%d", &code);

        if (code == 1)
        {
        }
        if (code == 2)
        {
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("程序结束\n");
            break;
        }
    }

    return 0;
}