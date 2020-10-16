#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int i=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    do
    {
        printf("The number is %d\n", i+1);
        i = i+1;
    } while (i<n);
    
    
    return 0;
}
