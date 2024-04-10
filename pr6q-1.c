#include <stdio.h>
#include <string.h>

int main()
{
    char name[20],name2[20];
    int i,j=0,len,status=0;
    printf("Enter Your Name ");
    gets(name);
    printf("\nYour Name is ");
    puts(name);

    len = strlen(name);
    for(i=len-1;i>=0;i--)
    {
        name2[j] = name[i];
        j++;
    }
    name2[j] = '\0';

    printf("\nYour Name 2 is ");
    puts(name2);

    for(i=0;i<len;i++)
    {
        if(name2[i] = name[i])
        {
            status=1;
        }
        else
        {
            status=0;
            break;
        }
    }
    if(status == 0)
    {
        printf("Not Palindrom");
    }
    else
    {
        printf("Palindrom");
    }


}
