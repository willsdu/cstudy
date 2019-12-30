//
//  chap1.c
//  cstudy
//
//  Created by duyq on 2019/12/22.
//  Copyright © 2019 duyq. All rights reserved.
//

#include "stdio.h"
#include "achieve.h"
#define N 1000


void QuickFind(){
    int i, p,  q, t, id[N];
    for(i=0; i<N;i++)
    id[i]=i;
    
    while (scanf("%d %d\n",&p,&q)==2) {
        if (id[p] ==id[q])continue;
        for (t=id[p],i=0;i<N;i++)
            if (id[i]==t) id[i]=id[q];
        printf("%d %d\n",p,q);
        
    }
}
