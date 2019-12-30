//
//  arrayList.h
//  cstudy
//
//  Created by duyq on 2019/12/12.
//  Copyright © 2019 duyq. All rights reserved.
//

#ifndef arrayList_h
#define arrayList_h


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#endif /* arrayList_h */

typedef int Element;

struct Node
{
    Element data;
    struct Node *next;
};
typedef struct Node LinkedList;

//新建一个节点
LinkedList* NewNode(Element a);

//初始化列表
LinkedList* NewList(int length, ...);

//在指定位置插入一个节点
LinkedList* Insert(LinkedList *head, Element a,int x);

//追加一个值
LinkedList* Append(LinkedList *head, Element a);

//删除指定位置的一个节点，如果没有指定a的值，那么就删除所有的值
LinkedList* Delete(LinkedList *head, Element a);

//查找指定的第一个节点
LinkedList* Find(LinkedList *head, int a);

//遍历指定的一个节点
void Scan(LinkedList *head);

//删除所有的节点
void Release(LinkedList *head);
