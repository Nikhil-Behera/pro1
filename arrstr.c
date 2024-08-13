#include<stdio.h>
#include<string.h>
int main(){
    struct emp{
        char name[90];
        int sal;

    };
    int n;
    printf("Enter the no. of employees:");
    scanf("%d",&n);

    struct emp emp1[n];

    for(int i=0;i<=n;i++){
        printf("Enter the name : \n");
        gets(emp1->name);
        printf("Enter the salary:\n");
        scanf("%d",&emp1->sal);
    }

    for(int i=0;i<=n;i++){
        printf("Employee name is : ");
        puts(emp1->name);
        printf("The salary is %d",emp1->sal);
    }

    return 0;
}