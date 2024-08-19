#include<stdio.h>
int main(){
    int a;
    printf("Enter first number: ");
    scanf("%d",&a);
    int b;
    printf("Enter second number: ");
    scanf("%d",&b);
    int ch;
    printf("Enter ypur choice: \n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    scanf("%d",&ch);

    int sum=a+b;
    int diff=a-b;
    int prod=(a)*(b);
    int quot=(a)/(b);
    
    if(ch==1) printf("The sum of numbers is: %d",sum);
    if(ch==2) printf("The difference of numbers is: %d",diff);
    if(ch==3) printf("The product of numbers is: %d",prod);
    if(ch==4) printf("The division of numbers is: %d",quot);
    
    
    
    return 0;
}