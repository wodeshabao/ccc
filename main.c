#include <stdio.h>
#include<math.h>


struct lxd
{
    int x;
    int y;
};

int main()
{
    int index=0;
    struct lxd arr[100];
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
            printf("请输入添加车的x坐标和y坐标\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);
            arr[index].x=x;
            arr[index].y=y;
            index++;
            printf("添加成功，点击回车继续\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);

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