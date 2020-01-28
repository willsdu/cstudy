//
//  main.c
//  calculate
//
//  Created by duyq on 2019/3/6.
//  Copyright © 2019 duyq. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define  ADD '+'
#define  SUB '-'
#define  MUL '*'
#define  DIV '/'



void TrimAllChar(char *string, int c){
    int i=0;
    int j=0;
    int len=(int)strlen(string);
    for(i=0;i<len;i++){
        if(string[i]!=c && string[j]==c){
            char m=string[i];
            string[i]=string[j];
            string[j]=m;
        }
        if(string[j]!=c){
            j++;
        }
    }
    if(j<i || string[j]==c){
        if(string[j]==c){
            string[j]='\0';
        }else{
            string[j+1]='\0';
        }
    }
}
int Index(char *string,char c){
    int index=(int)strchr(string, c);
    return  index;
}




int main(int argc, const char * argv[]) {
    
    char s[]="1324 *23";
    printf("len %d\n",(int)strlen(s));
    TrimAllChar(s,' ');
    printf("find %s, len %d\n",s,(int)strlen(s));
    
    
    
    return 0;
}
