#include<stdio.h>
#include<string.h>
int main(){
    struct menu{
        char name[90];
        int price;
    };

    struct menu burger;
    strcpy(burger.name,"1.Burger");
    burger.price=125;

    struct menu pizza;
    strcpy(pizza.name,"2.Pizza");
    pizza.price=140;

    struct menu fries;
    strcpy(fries.name,"3.Fries");
    fries.price=60;

    struct menu coldcoffee;
    strcpy(coldcoffee.name,"4. Cold Coffee");
    coldcoffee.price=45;

    printf("Welcome to NIK'S CAFFE \n The menu is : \n 1.burger \n 2.Pizza \n 3.fries \n 4.Cold Coffee");
    int ch;
    printf("Enter your choice: ");
    scanf("%d",&ch);
    if(ch==1){
        printf("Your order is: %s\n%d",burger.name,burger.price);
    }
    if(ch==2){
        printf("Your order is: %s\n%d",pizza.name,pizza.price);
    }
    if(ch==3){
        printf("Your order is: %s\n%d",fries.name,fries.price);
    }
    if(ch==4){
        printf("Your order is: %s\n%d",coldcoffee.name,coldcoffee.price);
    }
    else{
        printf("Please print from the menu!!");
    }
    return 0;
}