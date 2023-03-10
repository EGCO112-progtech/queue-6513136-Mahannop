#include "stdio.h"
#include "Node.h"

typedef struct {
	order *headPtr,*tailPtr;
	int size;
}Queue; 

void enqueue_struct(Queue* q, int num,int amount){
  Node *new_node=(Node*)malloc(sizeof(Node));
  
  if(new_node){ 
     new_node->order_number = num; 
     new_node->nextPtr = NULL; 
     new_node->qty = amount; 
     if(q->headPtr == NULL) q->headPtr = new_node;  
     else (q->tailPtr)->nextPtr = new_node; 
     q->tailPtr = new_node; 
     q->size++;
    //Finish enqueue 
    printf("Your order is : %d\n",num); 
  }
}


int dequeue_struct(Queue *q) {
   int cash,price; 
   NodePtr t=q->headPtr;
   if(q->size>0 /* if(t) */) {
      switch(t->order_number) {
        case 1: printf("Your food is ** Ramen **\n");
        price = t->qty*100; 
        break;
        case 2: printf("Your food is ** Somtum **\n");
        price = t->qty*20; 
        break;
        case 3: printf("Your food is ** Fried Chicken **\n");
        price = t->qty*50; 
        break;
        default: printf("No Food Left !");  }

        printf("You have to pay : %d THB\n",price);
        do{
          printf("ENTER YOUR CASH : ");
          scanf("%d",&cash); 
          if((cash-price)==0) break;
          else if((cash-price)>0) {
            printf("Change is : %d THB\n",cash-price);
            break; 
          }
          else if((cash-price)<0) {
            printf("Not Enough !\n"); 
          } 
        }while((cash-price)<0);
       printf("Thank you , Much appreciated !\n");
   //part of dequeue
   q->headPtr = t->nextPtr; 
   if(q->headPtr == NULL) q->tailPtr = NULL; 
   q->size--; 
   free(t); 
   return price;
   //Finish Dequeue
   }
   printf("Empty Queue !\n");
   return 0; 
}
void display() {
    printf("=== WELCOME TO RESTAURANT ===\n");
    printf("There are numbers of menu following this : \n"); 
    printf("1) Ramen : 100 THB \n2) Papaya-Salad : 20 THB\n3) Fried Chicken : 50 THB\n");
    printf("================================\n");
 }
   //int price = t->order_number;
   //Finish Dequeue


