/*program for checking character is vowel or consonent*/
#include<stdio.h>
#include<conio.h>
int main(){
char ch,c;
printf("Enter character to check");
scanf("%c",&c);
c= checkConVow(ch);
}
void checkConVow(char ch)
{
    
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        {
            printf("\n %c character is vowels",ch);
        }
    else
        {
            printf("character is cosonent");
        }
}