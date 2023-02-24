#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"
/* ./Q 1 2 3 2 x 3 2 x
   switch(choice) {
   case 1: Ramen 100 bath // recommend dequeue using "currency" //
       break; 
   case 2: Somtum 20 bath 
       break; 
   case 3: Fried Chicken 50 bath 
       break;
  }
*/


int main(int argc , char **argv) {
   /* For Node.h ( only q )
   NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL; */
   Queue q; //Most importantly, don't forget to declare struct of queue !
   q.headPtr = NULL;
   q.tailPtr = NULL;
   q.size = 0; 
  //set value and number 
   order Ramen;
   order Somtum;
   order Chicken;
   int price; 

/* For struct Queue
  Queue q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;
*/
   int i,x,custom=1;
/* for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            x = dequeue(&headPtr,&tailPtr);
            printf("dequeing %d\n",x);
        }
        else {
           enqueue(&headPtr,&tailPtr, atoi(argv[i]));
        }
 }
  return 0; */
  for(i=1;i<argc;i++) {
        if(strcmp(argv[i],"x")==0) {
            printf("Customer No : %d\n",custom);
            x = dequeue_struct(&q);
            custom++;
        }
        else {
           enqueue_struct(&q ,atoi(argv[i]),atoi(argv[i+1]));
           i++; 
        }
 }
  printf("==================================================\n");
  switch(q.size) {
    case 0: printf("There is NO Queue left !\n"); 
      break;
    case 1: printf("There is %d ppl left in the queue !\n",q.size);
      break;
    default: printf("There are %d ppl left in the queue !\n",q.size); 
  }
    printf("Clearing Queue : "); 
    while(q.size>0) dequeue_struct(&q); 
  return 0;
  //54 x 8 3 x x 68 95 x 
  //1 2 3 2 x 3 2 x
}
