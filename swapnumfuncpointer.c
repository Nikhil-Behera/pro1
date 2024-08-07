#include<stdio.h>
void swap(int*x,int*y){
    int temp;
    temp=*x;   //temp  me a ki value daal di
    *x=*y;     // a me b ki value daal di
    *y=temp;   //b me a ki value ki val daal di
}
int main(){
    int a=2,b=5;
    int*x=&a;
    int*y=&b;
    swap(&a,&b);
    printf("The value of a is: %d",a);
    printf("\nThe value of b is : %d",b);
    return 0;

}