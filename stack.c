#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE=100
typedef int ElemType;
typedef struct{
    ElemType data[MAXSIZE];
    struct stack*next;
    int top;

}stack;


void initStack(Stack*s){


    s->top=-1;
}


int isEmpty(Stack*s){
    if(s->stop=-1){

        printf("空的")；
        return 1;


    }
    else{

        return 0;
    }


}
int push(stack*s,ElemType e){

    Stack*p=(Satck*)malloc(sizeof(Stack));
    p->data=e;
    p->next=s->next;
    s->next=p;
    return 1;

}