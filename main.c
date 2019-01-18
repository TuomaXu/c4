#include <stdio.h>

/*
一个人，一天，成纺织 5米


一天要1000米布   200人一起工作  一人的工资一天10块钱   2000块人力成本


一个机器，一天可以纺织 1000米   
20人研发一个机器

*/

/*
学生（语数外）成绩管理系统

学生姓名、语文成绩、数学成绩、英语成绩  放到一个变量中

1---添加学生成绩
2---删除学生成绩
3---显示所有学生成绩

4---业务1：所有总分不及格的学生（小于180）
5---业务2：每一科都不及格的学生
6---业务3：显示总分最高的学生（这个业务有bug，如果有多个人总分最高，那么随机显示一个即可）
7---业务4：显示平均分最高，且没有不及格科目的学生

*/

struct Student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};

int main()
{

    struct Student arr[1000];
    int index = 0;

    printf("学生成绩管理系统\n");

    while (1)
    {

        printf("1---添加学生成绩\n");
        printf("2---删除学生成绩\n");
        printf("3---显示所有学生成绩\n");
        printf("4---业务1：所有总分不及格的学生（小于180）\n");
        printf("5---业务2：每一科都不及格的学生\n");
        printf("6---业务3：显示总分最高的学生\n");
        printf("7---业务4：显示平均分最高，且没有不及格科目的学生\n");
        printf("8---退出\n");

        printf("请选择:\n");

        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入学生姓名:\n");
            scanf("%s", arr[index].name);

            printf("请输入学生语文成绩:\n");
            scanf("%d", &(arr[index].yuwen));

            printf("请输入学生数学成绩:\n");
            scanf("%d", &(arr[index].shuxue));

            printf("请输入学生英语成绩:\n");
            scanf("%d", &(arr[index].yingyu));

            index++;

            printf("添加完成，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {

        }
        if (code == 3)
        {
            printf("所有学生成绩如下：\n");

            for (int i = 0; i < index; i++)
            {
                printf("第%d个学生的姓名为%s，语文成绩为：%d，数学成绩为%d，英语成绩为%d\n", i + 1, arr[i].name, arr[i].yuwen, arr[i].shuxue, arr[i].yingyu);
            }

            printf("\n点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("总分不及格的同学如下：\n");
            for(int  i = 0; i < index; i++)
            {
                int sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                if(sum < 180){
                    printf("总分不及格的学生姓名为%s，语文：%d，数学%d，英语%d\n",arr[i].name,arr[i].yuwen,arr[i].shuxue,arr[i].yingyu);
                }
            }
            printf("\n点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
            
        }
        if (code == 5)
        {
            printf("每一科都不及格的学生如下：\n");
            
            for(int  i = 0; i < index; i++)
            {
                if(arr[i].yuwen < 60 && arr[i].shuxue < 60 && arr[i].yingyu<60){
                    printf("三科都不及格的学生姓名为%s，语文：%d，数学%d，英语%d\n",arr[i].name,arr[i].yuwen,arr[i].shuxue,arr[i].yingyu);
                }
            }
            printf("\n点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
            
        }
        if (code == 6)
        {
            printf("总分最高的学生为：\n");

            int max = 0;
            int stuID = 0;
            
            for(int i = 0; i < index; i++)
            {
                int sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                if(max < sum){
                    max  =  sum;
                    stuID = i;
                }
            }
            printf("总分最高的学生姓名为%s，语文：%d，数学%d，英语%d\n",arr[stuID].name,arr[stuID].yuwen,arr[stuID].shuxue,arr[stuID].yingyu);
            
            printf("\n点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);

        }
        if (code == 7)
        {
            //先判断，是不是有不及格科目，如果没有，才去比较平均分

            double max = 0.0;
            int stuID = 0;
            for(int  i = 0; i < index; i++)
            {
                if(arr[i].yuwen >= 60 && arr[i].shuxue >= 60 && arr[i].yingyu >= 60){
                    double avg = (arr[i].yuwen + arr[i].shuxue + arr[i].yingyu)/3.0;
                    if(max < avg){
                        max = avg;
                        stuID = i;
                    }

                }
            }

            printf("平均分最高且没有不及格科目的学生姓名为%s，语文：%d，数学%d，英语%d\n",arr[stuID].name,arr[stuID].yuwen,arr[stuID].shuxue,arr[stuID].yingyu);
            
            printf("\n点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);


            
        }
        if (code == 8)
        {
            printf("程序退出\n");
            break;
        }
    }

    return 0;
}