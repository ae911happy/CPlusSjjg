#include <stdio.h>

struct Book
{
    char title[128];
    char author[40];
    float price;
    unsigned int date;
    char publisher[40];
} book;

int main()
{
    printf("请输入书名：");
    fflush(stdout);
    scanf("%s",book.title);
    printf("请输入作者：");
    fflush(stdout);
    scanf("%s",book.author);
    printf("请输入售价：");
    fflush(stdout);
    scanf("%f",&book.price);
    printf("请输入出版日期：");
    fflush(stdout);
    scanf("%d",&book.date);
    printf("请输入出版社：");
    fflush(stdout);
    scanf("%s",book.publisher);

    fflush(stdout);
    printf("\n====数据录入完毕====\n");
    printf("书名：%s\t作者：%s\t售价：%f\t出版日期：%d\t出版社：%s",book.title,book.author,book.price,book.date,book.publisher);

    return 0;
}
