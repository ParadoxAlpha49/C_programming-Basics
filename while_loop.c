#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=0;
    printf("Enter the value of a:\n");
    scanf("%d",&a);

    while (a<=20)
    {
       printf("The next number is %d\n", a++);
    }
    
    
    return 0;
}
