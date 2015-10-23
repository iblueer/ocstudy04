//
//  main.c
//  PBR
//
//  Created by maemolee on 15/10/17.
//  Copyright © 2015年 maemolee. All rights reserved.
//

#include <stdio.h>
#import <math.h>

int main(int argc, const char * argv[]) {
    double pi = 3.14;
    double integerPart;
    double fractionPart;
    
    //将integerPart的地址作为实参传入
    fractionPart = modf(pi, &integerPart);
    
    //获取integerPart地址上的值
    printf("integerPart = %.0f, fractionPart = %.2f\n", integerPart, fractionPart);
    
    return 0;
}
