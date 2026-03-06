#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;

typedef struct node{

ElemType data;
struct node *next;


}Node;

Node*initlist(){

    Node*head=(Node*)malloc(sizeof(Node));
    head->data=0;
    head->next=NULL;
    return head;


}
void inserthead(Node*L,ElemType e){
    Node*P=(Node*)malloc(sizeof(Node));
    P->data=e;
    P->next=L->next;
    L->next=P;


}
Node*gettail(Node*L){

    Node*p=L;
    while(p->next!=NULL){
    p=p->next;


}
    return p;

}
Node* inserttail(Node*tail,ElemType e){
    Node*p=(Node*)(malloc(sizeof(Node)));
    p->data=e;
    tail->next=p;
    p->next=NULL;

    return p;

}


void listNode(Node*L)
{

    Node*P=L->next;
    while(P!=NULL){

        printf("%d\n",P->data);
        P=P->next;
    }
    printf("\n");



}
int listlength(Node*L){

    Node*p=L;
    int len=0;
    while(p!=NULL){

    p=p->next;
    len++;

    }
    return len;



}

int findNodeFS(Node*L,int k){
    Node*fast=L->next;
    Node*slow=L->next;

    for(int i=0;i<k;i++){
        fast=fast->next;
    



    }
    while(fast!=NULL){

        fast=fast->next;
        slow=slow->next;


    }

printf("%d\n",slow->data);
return 1;


}

int main(){

    Node *list=initlist();
    inserthead(list,10);
    inserthead(list,20);
    inserthead(list,30);
    inserthead(list,40);
    inserthead(list,50);
    listNode(list);
    findNodeFS(list,3);
    return 0;
}