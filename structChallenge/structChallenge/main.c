//
//  main.c
//  structChallenge
//
//  Created by maemolee on 15/10/18.
//  Copyright © 2015年 maemolee. All rights reserved.
//

#import <stdio.h>
#import <time.h>

int main(int argc, const char * argv[]) {
    long int secondsSince1970 = time(NULL);
    printf("It has been %ld seconds since 1970\n", secondsSince1970);
    long int secondsAfter4Million = secondsSince1970 + 4000000;
    
    struct tm thatDay;
    localtime_r(&secondsAfter4Million, &thatDay);
    printf("The date is %d-%d-%d\n", thatDay.tm_mon + 1, thatDay.tm_mday, thatDay.tm_year + 1970);
    return 0;
}
