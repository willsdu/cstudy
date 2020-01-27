#include "arrayList.h"

int main()
{
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
