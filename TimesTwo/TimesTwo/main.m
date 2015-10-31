//
//  main.m
//  TimesTwo
//
//  Created by maemolee on 15/10/31.
//  Copyright © 2015年 maemolee. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSDate *currentTime = [NSDate date];
        NSLog(@"currentTime's value is %p", currentTime);
        
        NSDate *startTime = currentTime;
        
        sleep(2);

        currentTime = [NSDate date];
        NSLog(@"currentTime's value is %p", currentTime);
        NSLog(@"The address of the oriinal object is %p", startTime);
        
        currentTime = nil;
        NSLog(@"currentTime's value is %p", currentTime);
        
        
    }
    return 0;
}
