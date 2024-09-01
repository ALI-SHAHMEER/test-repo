#include<stdio.h>
#include<string.h>

int main(){
    for(int i=0;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d is even number\n",i);
        }
        else if(i%2!=0)
        {
            printf("%d is odd number\n",i);
        }
    }   
    return 0;
}