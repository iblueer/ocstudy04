//
//  main.c
//  CountDown
//
//  Created by maemolee on 15/10/17.
//  Copyright © 2015年 maemolee. All rights reserved.
//

#include <stdio.h>
#import <readline/readline.h>

int main(int argc, const char * argv[]) {
    int top;
    int step = 3;
    int bottom = 0;
    printf("Where should I start counting? ");
    do{
        const char *temporary = readline(NULL);
        top = atoi(temporary);
        //现在我们认识到atoi的实参必须是const char，而且输出的必须是int。跟他类似的函数atol输出的则是long int，atoll则是long long int。
    }while(top == 0);//而且如果atoi函数出错，就会输出0.这很方便。
    for (int i = top; i >= bottom; i -= step) {
        printf("%d\n", i);  
        if (i % 5 == 0) {
            printf("Found one!\n");
        }
    }
    return 0;
}
