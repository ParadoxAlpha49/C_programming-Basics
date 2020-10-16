#include<stdio.h>

int main(int argc, char const *argv[]){
    int x=5 , i=0;
    while (i<10)
    {
        i++;
        if(i!=x){
            continue;
        }
        else
        {
            printf("%d\n",i);
        }
        
    }
    

    return 0;
}