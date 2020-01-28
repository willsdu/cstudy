#include "stack.h"

int main()
{
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
