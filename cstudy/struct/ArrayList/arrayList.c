//
//  arrayList.c
//  cstudy
//
//  Created by duyq on 2019/12/12.
//  Copyright © 2019 duyq. All rights reserved.
//

#include "arrayList.h"

LinkedList* NewList(int length, ...){
    va_list args;
    va_start(args, length);
    
    LinkedList *head=NULL;
    
    int val=0 ,i=0;
    for(i=1;i<=length;i++){
        val=va_arg(args, int);
        head=Append(head, val);
    }
    return head;
}

LinkedList* NewNode(Element d)
{
    LinkedList *n = (LinkedList *)malloc(sizeof(LinkedList));
    n->next = NULL;
    n->data = d;
    return n;
}


//遍历输出链表
void Scan(LinkedList *head)
{
    LinkedList *current = head;
    while (current)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}
LinkedList* tail(LinkedList *head){
    LinkedList *t=head;
    
    if(!head){
        return NULL;
    }

    while(t->next){
        t=t->next;
    }
    return t;
}

//追加到列表后面
LinkedList* Append(LinkedList *head,Element d)
{
    LinkedList *n = NewNode(d);
    LinkedList *last=tail(head);
    
    if (!head)
    {
        head = n;
    }
    else
    {
        last->next = n;
    }
    return head;
}

//查找指定值的第一个符合条件的节点
LinkedList* Find(LinkedList *head ,Element d)
{
    LinkedList *current = head;
    while (current)
    {
        if (current->data == d)
        {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

//移除所有值为a的节点
LinkedList* Delete(LinkedList *head, Element a)
{
    LinkedList *current = head;
    LinkedList *pre = NULL;
    while (current)
    {
        if (current->data == a)
        {
            if (pre)
            {
                pre->next = current->next;
            }
            else
            {
                head = current->next;
                pre = current->next;
            }
            free(current);
            current=pre->next;
            continue;
        }
        pre=current;
        current = current->next;
    }
    return head;
}

//释放该list的所有的节点
void Free(LinkedList *head){
    LinkedList *current=NULL;
    
    while (head) {
        current=head;
        head=head->next;
        free(current);
    }
}
// 向指定位置插入一个节点
LinkedList* Insert(LinkedList *head, Element e,int x){
    LinkedList *current=head;
    LinkedList *new=NewNode(e);
    int c=0;
    
    if(x==0){
        new->next=head;
        return new;
    }
    
    while (current) {
        if(c==x-1){
            new->next=current->next;
            current->next=new;
            break;
        }
        current=current->next;
    }
    return head;
}