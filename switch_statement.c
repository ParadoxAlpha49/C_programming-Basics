#include <stdio.h>

int main(int argc, char const *argv[])
{
    int rating;
    printf("Enter your rating\n");
    scanf("%d", &rating);
    switch(rating){
        case 1:
        printf("You press 1\n");
        break;
        case 2:
        printf("You press 2\n");
        break;
        case 3:
        printf("You press 3\n");
        break;
        case 4:
        printf("You press 4\n");
        break;
        case 5:
        printf("You press 5\n");
        break;
        default: 
        printf("invalid\n");
        break;
    }
    return 0;
}
