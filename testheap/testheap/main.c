//
//  main.c
//  testheap
//
//  Created by maemolee on 15/10/19.
//  Copyright © 2015年 maemolee. All rights reserved.
//

#include <stdio.h>
#import <stdlib.h>

int main(int argc, const char * argv[]) {
    float *startOfBuffer;
    startOfBuffer = malloc(1000 * sizeof(float));
    free(startOfBuffer);
    startOfBuffer = NULL;
    return 0;
}
