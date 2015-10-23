//
//  main.c
//  ProgrammersAnniversary
//
//  Created by maemolee on 15/10/21.
//  Copyright © 2015年 maemolee. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    long second = time(NULL);
    struct tm date;
    localtime_r(&second, &date);
    printf("Today is %d-%d-%d\n", date.tm_mday, date.tm_mon+1, date.tm_year+1900);
    int dateDiff = date.tm_yday - 255;
    long secondDiff = labs(dateDiff) * 24 * 60 * 60;
    int frontBehind = dateDiff>=0?1:0;
    if (frontBehind) {
        second -= secondDiff;
    }else{
        second += secondDiff;
    }
    localtime_r(&second, &date);
    printf("This year's Programmer's Day is %d-%d-%d\n", date.tm_mday, date.tm_mon+1, date.tm_year+1900);
    return 0;
}
