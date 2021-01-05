/*program for checking no is even or odd*/
#include<stdio.h>
#include<conio.h>
int evenOdd(int n)
{
    if(n%2==0)
    printf("No is even");
    else
    printf("no is odd");
    return 0;
}
int main()
{
    int no;
    printf("enter no");
    scanf("%d",&no);
    evenOdd(no);
}