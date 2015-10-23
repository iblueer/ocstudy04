//
//  main.m
//  printNameOfThisMacbook
//
//  Created by maemolee on 15/10/22.
//  Copyright © 2015年 maemolee. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSHost * computerInfo = [NSHost currentHost];
        NSString * computerName = [computerInfo localizedName];
        NSLog(@"The name of this Macbook is %@", computerName);
    }
    return 0;
}
