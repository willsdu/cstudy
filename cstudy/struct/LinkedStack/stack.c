//
//  stack.c
//  cstudy
//
//  Created by duyq on 2019/12/14.
//  Copyright © 2019 duyq. All rights reserved.
//

#include "stack.h"


 //创建栈
Stack* CreateStack(){
    Stack *s=(Stack *)malloc(sizeof(Stack));
    while(s!=NULL){
    s->next=NULL;
        return s;
    }
    printf("out of memory\n");
    return NULL;
}

//清空栈
void StackEmpty(Stack *s){
    while(!IsEmpty(s)){
        PopStack(s);
    }
    printf("now stack is empty\n ");
}
//撤销(删除)栈
void DestoryStack(Stack *s){
    free(s);
    printf("now stack is destoryed\n");
    return;
}
//判空
int IsEmpty(Stack *s)
{
    return s->next==NULL;
}

 //入栈
int PushStack(Stack *s, Element e){
    Stack *new=(Stack*)malloc(sizeof(Stack));
    if(new!=NULL){
        new->data=e;
        new->next=s->next;
        s->next=new;
        return 1;
    }
    printf("out of stack place \n");
    return 0;
}
//出栈
int PopStack(Stack *s){
    Stack *top=NULL;
    if(!IsEmpty(s)){
        top=s->next;
        s->next=top->next;
        free(top);
        return 1;
    }
    return 0;
}
//取栈顶元素
Element GetTopElement(Stack *s){
    Stack *top=NULL;
    if(!IsEmpty(s)){
        top=s->next;
        s->next=top->next;
        return top->data;
    }
    return -1;
}

//打印出stack的所有的元素
void ScanStack(Stack *s){
    Stack *c=s->next;
    while (c!=NULL) {
        printf("%d\n",c->data);
        c=c->next;
    }
    return ;
}