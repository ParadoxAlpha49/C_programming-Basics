#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=5;
    printf("The value of A is %d\n", a++);
    printf("The value of A is %d\n", ++a);
    a+=10;
    printf("The final value of A is %d\n", a);
    return 0;
}
