//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct node
{
    int order_number;
    int qty; 
    struct node *nextPtr;
};

typedef struct node order;
typedef struct node Node;
typedef struct node* NodePtr;


void enqueue(NodePtr * head, NodePtr* tail, int number, int amount){
  Node* new_node=(NodePtr)malloc(sizeof(Node));
  if(new_node){ 
     new_node->order_number = number; 
     new_node->nextPtr = NULL;
     if(*head == NULL) *head = new_node; //ไม่มีหางแถว ( มีแค่ตัวเดียว ) เอาไปต่อไม่ได้     
    else (*tail)->nextPtr = new_node; //new_node ( ข้อมูลใหม่ ) เอาไปต่อหางแถว
     *tail = new_node; //เปลี่ยนหางแถวเป็น new_node
    /* Finish enqueue*/
  }
}


int dequeue(NodePtr* head, NodePtr* tail){
   NodePtr t=*head;
   if(t) { //create t successfully ! 
   int value= t->order_number;
   *head = t->nextPtr;  //ขยับหัวแถวทุกรอบ t = *head->nextPtr
   /* Finish dequeue*/
   if(*head == NULL) *tail = NULL; //หัวแถวหมด หางแถวหมด 
   free(t); 
   return value;
  }
   else printf("Empty queue !\n");
   return 0;
}

#endif
