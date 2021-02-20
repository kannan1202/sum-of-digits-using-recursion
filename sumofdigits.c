#include<stdio.h>
int theSum(int);
int main()
{
    int num,sum;
    printf("Enter a Number to perform Sum : ");
    scanf("%d",&num);
    sum = theSum(num);
    printf("Sum of Digits of Given Number is:  %d",sum);
    return 0;
}
 
int theSum(int num)
{
    static int sum =0,r;
    if(num!=0)
    {
        r=num%10;
        sum=sum+r;
        theSum(num/10);
    }
 
    return sum;
}
