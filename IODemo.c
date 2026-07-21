#include<stdio.h>
int main()
{
    char div ='\0';
    int age =0;

    printf("Enter your Div:\n");
    scanf("%c",&div);

    printf("Enter your age:\n");
    scanf("%d", & age);

    printf("your Division is :%c\n" +div);
    printf("your age is:%d\n", +age);

    return 0;
}