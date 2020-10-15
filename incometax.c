#include<stdio.h>

int main(int argc, char const *argv[])
{
    float tax = 0, income;
    printf("Enter the amout of your income\n");
    scanf("%f", &income);

    if (income >= 100000 && income <= 200000)
    {
        tax = tax + 0.05 * (income - 100000);
    }

    if (income >= 300000 && income <= 400000)
    {
        tax = tax + 0.20 * (income - 300000);
    }

    if (income >= 500000)
    {
        tax = tax + 0.30 * (income-500000);
    }
    printf("Your net income tax is: %f \n", tax);
    
    return 0;
}
