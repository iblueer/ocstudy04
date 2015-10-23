//
//  main.m
//  LoopsChallenge2
//
//  Created by maemolee on 15/10/17.
//  Copyright © 2015年 maemolee. All rights reserved.
//

#import <stdio.h>
#import <readline/readline.h>

int main(int argc, const char * argv[]) {
    printf("Who is cool? ");
    const char *name = readline(NULL);
    printf("%s is cool!\n\n", name);
    return 0;
}
