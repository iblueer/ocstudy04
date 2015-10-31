//
//  main.m
//  challenge_14_7
//
//  Created by maemolee on 15/10/24.
//  Copyright © 2015年 maemolee. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        //NSDate *now = [NSDate date];//get the date today, get the time now
        NSDate *now = [[NSDate alloc] init];
        NSLog(@"This NSDate lives at %p", now);
        NSLog(@"This date is %@", now);//Here now has not a * mark.
        
        //double seconds = [now timeIntervalSince1970];//the time interval between [now] and [00:00, Jan, 1, 1970]
        //NSLog(@"%f", seconds);
        
        //NSDate *laterDate = [now dateByAddingTimeInterval:-100000];
        //NSLog(@"The later date is %@", laterDate);
        
        //NSCalendar *nowCal = [NSCalendar currentCalendar];
        //NSString *nowCalDay = [nowCal calendarIdentifier];
        //NSLog(@"The calendar is a %@ calendar.", nowCalDay);
        
        //NSUInteger dayOfCal = [nowCal ordinalityOfUnit:NSCalendarUnitDay//the part which need a ordinality
        //                                        inUnit:NSCalendarUnitMonth//the range where we find the ordinality from
        //                                       forDate:now];
        //NSLog(@"%lu", dayOfCal);
        
        //================Challenge 14.7================
        NSDateComponents *birthDay = [[NSDateComponents alloc] init];
        [birthDay setYear:1995];
        [birthDay setMonth:11];
        [birthDay setDay:20];
        [birthDay setHour:8];
        [birthDay setMinute:40];
        [birthDay setSecond:0];
        
        NSCalendar *g =[[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
        
        NSDate *birth = [g dateFromComponents:birthDay];
        double timeIntervalSinceBirth = [now timeIntervalSinceDate:birth];
        NSLog(@"The seconds from my birth to now is %f", timeIntervalSinceBirth);
        
        
    }
    return 0;
}
