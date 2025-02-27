#include<stdio.h>
int countWord(char str[])
{
    int count,i;
    for (i = 0; i < strlen(str); i++)
    {
        if(str[i]=='32')
        {
            count++;
        }
        
    }
    return count;
}
int main()
{
    char str[100];
    gets(str);
    int w =countWord(str);
    printf("%d",w);

}