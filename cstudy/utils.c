//
//  utils.c
//  cstudy
//
//  Created by duyq on 2019/12/14.
//  Copyright © 2019 duyq. All rights reserved.
//

#include <stdio.h>
#include "time.h"
#include "stdlib.h"


int Random(){
    srand((unsigned)time(NULL));
    return rand();
}
