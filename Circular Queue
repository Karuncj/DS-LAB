/*******************************************
*File          :Cirular Queue.c
*Description   :Circular Queue implementation
*Author        :KARUN CHERY JAMES
*Date       :6/12/21
*******************************************/

#include<stdio.h>
void print(int [],int ,int);
int main(){

int queue[10],rear=-1,front=-1,i,size,option,item;
printf("\nEnter the size of queue\n");
scanf("%d",&size);
do{
        printf("\n\n\nChoose your option\n");
        printf("1.Push Operation\n2.Pop Operation\n3.Exit\n");
        scanf("%d",&option);
        switch(option){
        case 1:if ((front==rear+1) || (rear==size-1 && front==0)){
                    printf("\nThe queue is full");
                   
                    break;
                    }
                    else if(rear==-1){
                          rear=0;
                          front=0;
                          printf("\nEnter the element");
                          scanf("%d",&item);
                          queue[rear]=item;
                          print(queue,rear,front);
                          break;
                    }
                    else{
                    rear=rear+1;
                    printf("\nEnter the element");
                      scanf("%d",&item);
                               queue[rear]=item;
                               print(queue,rear,front);
                    }
                    break;
        case 2:if (front==-1){
                    printf("\nThe queue is empty");
                    break;
                   }
                   else if(front==rear){
                    item=queue[front];
                    print(queue,rear,front);
                    front=rear=-1;
                    }
                   else{
                       item=queue[front];
                       front++;
                       print(queue,rear,front);
                   }
                   
                   break;
        case 3:break;
        default:printf("\nEnter a valid option");
                break;
        }
    }while(option==1||option==2);
   
}
void print(int queueArray[],int rear,int front){
    int i;
    for(i=front;i<=rear;i++){
        printf("%d\t",queueArray[i]);
    }
}
