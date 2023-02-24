#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"

int main(int argc , char **argv) {
   /* For Node.h ( only q )
   NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL; */
   
   Queue q; //Most importantly, don't forget to declare struct of queue !
   q.headPtr = NULL;
   q.tailPtr = NULL;
   q.size = 0; 
/* For struct Queue
  Queue q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;
*/
   int i,x;
   

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
  for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            x = dequeue_struct(&q);
            printf("dequeing %d\n",x);
        }
        else {
           enqueue_struct(&q , atoi(argv[i]));
        }
 }
  return 0;
  //54 x 8 3 x x 68 95 x 
}
