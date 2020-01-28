//
//  main.c
//  string
//
//  Created by duyq on 2019/3/7.
//  Copyright © 2019 duyq. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#include <malloc/malloc.h>

void Reverse(char *string){
    int i=0;
    int j=0;
    while(string[j]!='\0'){
        j++;
    }
    char m;
    j--;
    while(i<j){
        m=string[i];
        string[i]=string[j];
        string[j]=m;
        
        i++;
        j--;
    }
}

struct Node{
    int data;
    struct Node *next;
};

struct Node * NodeReverse(struct Node *head){
    struct Node *p=head;
    struct Node *temp;
    struct Node *NewHead=NULL;
    
    while(p!=NULL){
        temp=p->next;
        p->next=NewHead;
        NewHead=p;
        p=temp;
    }
    return NewHead;
}

void PrintNode(struct Node *head){
    struct Node *temp = head;
    while(temp!= NULL){
        printf("node is %d \n",temp->data);
        temp=temp->next;
    }
}

struct Node * NewNodes(int length){
    struct Node *head=NULL;
    struct Node *cur=NULL;
    
    for(int i=0;i<length;i++){
        struct Node *node = malloc(sizeof(struct Node *));
        node->data=i;
        if(head==NULL){
            head=node;
        }else{
            cur->next=node;
        }
        cur=node;
    }
    cur->next=NULL;
    return head;
}

char MinCount(char *string){
    int alphabet[26]={};
    char matrix = 'a';
    int index=0;
    int n=0;
    while(string[index]!='\0'){
        n=string[index]%matrix;
        if(alphabet[n]==0){
            alphabet[n]=index+1;
        }else{
            alphabet[n]=-1;
        }
        index++;
    }
    int min=0;
    int i=0;
    for(i=0;i<26;i++){
        if(alphabet[i]==0){
            continue;
        }
        if(alphabet[i]!=-1 && min==0) {
            min=alphabet[i];
        }
        if(alphabet[i]!=-1 && alphabet[i]<min){
            min=alphabet[i];
        }
    }
    if(min==0){
        return ' ';
    }
    return string[min-1];
}

void Merge(){
    int a[5]={1,2,3,4,5};
    int b[6]={1,2,3,4,5,6};
    int c[11]={};
    
    int lena=5;
    int lenb=6;
    
    int i=0;
    int j=0;
    int k=0;
    
    while (i<lena || j<lenb) {
        if(i==lena && lena<lenb){
            c[i+j]=b[j];
            j++;
            continue;
        }
        if(j==lenb && lena>lenb){
            c[i+j]=a[i];
            i++;
            continue;
        }
        
        if(a[i]<=b[j]){
            c[i+j]=a[i];
            i++;
        }else if(a[i]>b[j]){
            c[i+j]=b[j];
            j++;
        }
    }

    while (k<11) {
        printf("%d\n",c[k]);
        k++;
    }
   
}

void print(int *a ,int len){
    for(int i=0;i<len;i++){
        printf("%d\n",a[i]);
    }
}

void swap(int *a ,int i ,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void quick(int *a, int start, int end){
    if(start>=end){
        return;
    }
    int low=start;
    int heigh=end;
    int base = a[end];
    while (low<heigh) {
        while(low<heigh && a[low]<=base){
            low++;
        }
        while (low<heigh && a[heigh]>=base) {
            heigh--;
        }
        swap(a, low, heigh);
    }
    swap(a, low, end);
    print(a, 7);
    printf("---------\n");
    quick(a, start, low-1);
    quick(a,low+1, end);
}





int main(int argc, const char * argv[]) {
//   char s[]="hheello world";
//    Reverse(s);
//    printf("%s\n",s);
    
//    struct Node *nodes=NewNodes(5);
//
//    PrintNode(nodes);
//
// struct Node *nodess= NodeReverse(nodes);
//
//    PrintNode(nodess);
    
//    char first = MinCount(s);
//    printf("first is %c\n",first);
//
   
//    Merge();
    
    int a[7]={6,5,2,1,7,6,3};
    printf("-----%p\n",&a);
    
    quick(a, 0, 6);

    print(a,7);
        
    return 0;
}
