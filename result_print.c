#include<stdio.h>

int main(int argc, char const *argv[])
{
    float Physics, Maths, Chemistry;
    float total;

    printf(" Enter the mark you got in Physics\n");
    scanf("%f",&Physics);

    printf(" Enter the mark you got in Maths\n");
    scanf("%f",&Maths);

    printf(" Enter the mark you got in Chemistry\n");
    scanf("%f",&Chemistry);

    total = (Physics + Maths + Chemistry)/3;

    if (Physics <=100 && Chemistry <=100 && Maths <=100 )
    {
        printf ("Your input is correct\n");

    if ((total<40) || Physics <33 || Maths <33 || Chemistry <33)
    {
        printf("Try Again, You are unfortunately failed\n");
    }
    else
    {
        printf("You are successfully passed\n");
    }

    }
    else
    {
        printf("Your input is not correct\n");
    }

    return 0;
}
