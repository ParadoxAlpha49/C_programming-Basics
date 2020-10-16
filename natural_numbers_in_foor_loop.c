#include<stdio.h>

int main(int argc, char const *argv[]){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i=n; i; i--){
        printf("The value of i is %d\n",i);
    }
    return 0;
}