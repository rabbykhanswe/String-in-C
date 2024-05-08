#include<stdio.h>
int main()
{
    char x[20];

    printf("Enter your string : ");
    gets(x);

    int len=strlen(x);

printf("The String Lenth is : %d",len);


    return 0;
}
