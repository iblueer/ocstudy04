//
//  main.m
//  TimeAfterTime
//
//  Created by maemolee on 15/10/22.
//  Copyright © 2015年 maemolee. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSDate *now = [NSDate date];
        NSLog(@"This is NSDate object lives at %p", now);//This is a pointer printer
        NSLog(@"The date is %@", now);//This prints the date info
        double seconds = [now timeIntervalSince1970];
        NSLog(@"the seconds since 1970 is %f", seconds);
        seconds = [now timeIntervalSinceNow];
        NSLog(@"the seconds since Now is %f", seconds);
        
        //parade II
        //double secondsTwo = [now dateByAddingTimeInterval:100000];//this new instance succeed from 'now'
        //NSLog(@"The seconds since 100000 is @f", secondsTwo);
        
        NSDate *later = [now dateByAddingTimeInterval:100000];
        NSLog(@"In 100,000 seconds it will be %@", later);
        
        NSCalendar *cal = [NSCalendar currentCalendar];
        NSString *dayInMoon = [cal calendarIdentifier];
        NSLog(@"The day in the moon is %@", dayInMoon /*[cal calendarIdentifier]*/);
        long unsigned getDayOfMonth = [cal ordinalityOfUnit:NSCalendarUnitDay inUnit:NSCalendarUnitMonth forDate:now];//This message will return us the order that day is in its month.
        NSLog(@"%lu", getDayOfMonth);
    }
    return 0;
}
