#include<stdio.h>

void calc()
{
    int a,b,ch;
    
    do
    {
        printf("Press 1 for Addition \nPress 2 for Minus \nPress 3 for Multiplication \nPress 4 for Division \nPress 5 for Module \nPress 0 for Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d",&ch);
        printf("Enter Number: ");
        scanf("%d",&a);
        printf("Enter Number: ");
        scanf("%d",&b);
        
        switch(ch)
        {
            case 1: printf("Addition is %d",a+b);
            break;
            
            case 2: printf("Minus is %d",a-b);
            break;
            
            case 3: printf("Multiplication is %d",a*b);
            break;
            
            case 4: printf("Division is %d",a/b);
            break;
            
            case 5: printf("Module is %d",a%b);
            break;
            
            case 0: printf("Exit");
            break;
            
            default:printf("\n Invalid Choice");
        }
    }while(ch!=0);
}

int main()
{
    calc();
    
}
