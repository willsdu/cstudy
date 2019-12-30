#include "arrayList.h"
#include "stack.h"
#include "achieve.h"

void TestList(){
    LinkedList *head=NewList(5, 4, 5, 5, 5, 6);
       Scan(head);
       LinkedList *n=Find(head,5);
       if(n){
           printf("node value is %d\n",n->data);
       }
       Delete(head, 5);
       printf("delete all node\n");
       Scan(head);
       Insert(head, 8, 1);
       Scan(head);
}

void TestStack(){
    Stack *s=CreateStack();
    
    PushStack(s, 10);
    PushStack(s, 45);
    PushStack(s, 33);
    PushStack(s, 9);
    
    ScanStack(s);
    
    printf("starting pop a element\n");
    PopStack(s);
    ScanStack(s);
    
    int e=GetTopElement(s);
    printf("starting get top element %d \n",e);
    
    
    
}


int main()
{
    TestStack();
}
