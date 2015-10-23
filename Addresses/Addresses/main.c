//
//  main.c
//  Addresses
//
//  Created by maemolee on 15/10/17.
//  Copyright © 2015年 maemolee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 17;
    int *addressOfI = &i;
    printf("i stores its value at %p\n", addressOfI);
    addressOfI = (int *)89;
    printf("Now i = %d\n", i);
    printf("An float is %zu bytes\n", sizeof(float));
    printf("A pointer is %zu bytes\n", sizeof(addressOfI));
    return 0;
}
