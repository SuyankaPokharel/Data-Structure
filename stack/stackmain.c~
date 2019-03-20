#include <stdio.h>
#include "stack.h"
#include "boolean.h"
/*
Name: Suyanka Pokharel
Course: Computer Programming II
*/
int menu(void); 

int main(void){
    stack top;
    int choice, data_item,a;
    init_stack(&top);
    choice = menu();


    while(choice !=4){
      
       switch(choice){
          case 1: if(!is_full()){
                    printf("Enter a data for push\n");
                    scanf("%d",&data_item);
                    push(&top,data_item);
                  }
                  else
                    printf("Error! Stack is full\n");
                  break;
   
          case 2: if(!is_empty(top)){
                    a= pop(&top);
                    printf("%d is removed\n",a);
                  }
                  else
                    printf("Error!stack is empty\n");
                  break;

          case 3: if(!is_empty(top))
                    print_stack(top);
                  else
                    printf("Error! Empty stack cannot be printed\n");
                  break;
          default:
                    printf("%d is not a valid selection\n",choice);
       }
       choice=menu();
    }
}
 
  menu(void){
    int selection;
    printf("1 Push\n");
    printf("2 Pop\n");
    printf("3 List\n");
    printf("4 Quit\n");
    printf(" Enter a selection\n");
    scanf("%d", &selection);
    return selection;
  }
    




         
                


           
   
