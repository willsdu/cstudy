//
//  stack.h
//  cstudy
//
//  Created by duyq on 2019/12/14.
//  Copyright © 2019 duyq. All rights reserved.
//

#ifndef stack_h
#define stack_h

#include <stdio.h>
#include <stdlib.h>

typedef  int  Element;

typedef struct node{
    Element data;
    struct node *next;
}Stack;

Stack* CreateStack(void);   //创建栈
void StackEmpty(Stack* );  //清空栈
void DestoryStack(Stack*); //撤销(删除)栈
int IsEmpty(Stack*);    //判空
int PushStack(Stack*, Element);    //入栈
int PopStack(Stack*);   //出栈
Element GetTopElement(Stack*); //取栈顶元素
void ScanStack(Stack*);   //遍历所有的元素，并且打印出来


#endif /* stack_h */





