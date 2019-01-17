#include <stdio.h>
#include <math.h>

struct lxd
{
    int x;
    int y;
};

int main()
{
    int index = 0;
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
            scanf("%d", &x);
            scanf("%d", &y);
            arr[index].x = x;
            arr[index].y = y;
            index++;
            printf("添加成功，点击回车继续\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 2)
        {

            if (index > 0)
            {
                index--;
                printf("删除成功，点击回车继续\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
            else
            {
                printf("删除失败，点击回车继续\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
        }
        if (code == 3)
        {
            printf("您添加车辆位置为\n");

            for (int i = 0; i < index; i++)
            {
                printf("您附近的第%d辆车为：（%d，%d）\n", i + 1, arr[i].x, arr[i].y);
            }
            printf("点击回车继续\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 4)
        {
            printf("请输入您的当前位置：\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);

            double min=10000;
            int carID=0;
            
            for(int i = 0; i < index; i++)
            {
                int dx=x - arr[index].x;
                int dy=y - arr[index].y;
                double l=sqrt(dx*dx+dy*dy);
                
                if (min>l) {
                    min=1;
                    carID=i;
                }
                
            }
            printf("您与第%d辆车的距离为：%lf，是最小距离\n",carID+1,min);
            printf("\n点击回车继续\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
            
        }
        if (code == 5)
        {
            printf("程序结束\n");
            break;
        }
    }

    return 0;
}