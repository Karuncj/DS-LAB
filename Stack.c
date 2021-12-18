/*******************************************
*File          :Stack.c
*Description   :Stack implementation
*Author        :KARUN CHERY JAMES
*Date          :6/12/21
*******************************************/
#include<stdio.h>
int i;
void print(int [],int);

int main(){
    int myStack[10],option,top,size,item;
    printf("\nEnter the size of stack(max 10)");
    scanf("%d",&size);
    top=-1;
    do{
        printf("\n\n\nChoose your option\n");
        printf("1.Push Operation\n2.Pop Operation\n3.Exit\n");
        scanf("%d",&option);
        switch(option){
        case 1:if (top==size-1){
                    printf("\nThe stack is full");
                    }
                    else{
                        top++;
                        printf("\nEnter the element");
                        scanf("%d",&item);
                        myStack[top]=item;
                        print(myStack,top);
                    }
                    break;
        case 2:if (top==-1){
                    printf("\nThe stack is empty");
                    }
                    else{
                        top--;
                        item=myStack[top];
                    }
                    print(myStack,top);
                    break;
        case 3:break;
        default:printf("\nEnter a valid option");
                break;
        }
    }while(option==1||option==2);
    
}
void print(int stackArray[],int top){
    int i;
    for(i=0;i<=top;i++){
        printf("%d\t",stackArray[i]);
    }
}

	