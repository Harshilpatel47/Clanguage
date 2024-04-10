#include<stdio.h>
struct emp
{
    int emp_id,emp_age,emp_expirence;
    char name[20];
    char company_name[20];
    char city[20];
    char role[20];
    
}e1[10];

int main()
{
    int i,n;
    printf("Enter No Of Employee: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter Employee ID:");
        scanf("%d",&e1[i].emp_id);
        
        printf("Enter Employee Name:");
        scanf("%s",&e1[i].name);
        
        printf("Enter Employee Age:");
        scanf("%d",&e1[i].emp_age);
        
        printf("Enter Employee Role:");
        scanf("%s",&e1[i].role);
        
        printf("Enter Employee City:");
        scanf("%s",&e1[i].city);
        
        printf("Enter Employee Expirence:");
        scanf("%d",&e1[i].emp_expirence);
        
        printf("Enter Employee Company Name:");
        scanf("%s",&e1[i].company_name);
    }
    
    printf("\n******Employee Details******\n");
    printf("ID \tName \tAge \tRole \tCity \tExpirence \tCompany Name");
    
    for(i=0;i<n;i++)
    {
        printf("\n%d \t%s \t%d \t%s \t%s \t%d \t\t%s",e1[i].emp_id,e1[i].name,e1[i].emp_age,e1[i].role,e1[i].city,e1[i].emp_expirence,e1[i].company_name);
    }
    printf("\n******End******\n");
}
