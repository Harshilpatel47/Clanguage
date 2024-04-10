#include<stdio.h>
struct student
{
    int stu_id,stu_age,stu_std;
    char stu_name[20];
    char stu_course[20];
    char stu_city[20];
    char stu_school[20];
    
}e1[10];

int main()
{
    int i,n;
    printf("Enter No Of Student: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter Student ID:");
        scanf("%d",&e1[i].stu_id);
        
        printf("Enter Student Name:");
        scanf("%s",&e1[i].stu_name);
        
        printf("Enter Student Age:");
        scanf("%d",&e1[i].stu_age);
        
        printf("Enter Student Course:");
        scanf("%s",&e1[i].stu_course);
        
        printf("Enter Student City:");
        scanf("%s",&e1[i].stu_city);
        
        printf("Enter Student Standard:");
        scanf("%d",&e1[i].stu_std);
        
        printf("Enter Student School Name:");
        scanf("%s",&e1[i].stu_school);
    }
    
    printf("\n******Employee Details******\n");
    printf("ID \tName \tAge \tCourse \tCity \tStandard \tSchool Name");
    
    for(i=0;i<n;i++)
    {
        printf("\n%d \t%s \t%d \t%s \t%s \t%d \t\t%s",e1[i].stu_id,e1[i].stu_name,e1[i].stu_age,e1[i].stu_course,e1[i].stu_city,e1[i].stu_std,e1[i].stu_school);
    }
    printf("\n******End******\n");
}
