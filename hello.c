#include<stdio.h>
int main ()
{
    int num;
    printf("Enter a positive number ");
    scanf("%d",&num);
    int count = 0; 
    if (num == 1 || num <= 0)
    {
        printf("Not defined");
    }
    else
    {
    for(int i = 1; i < num/2; i++)
    {
        if(num%i == 0)
        {
            count++;
        }
    }
    if (count == 1 || num == 2 || num == 3)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }
}
}