//
//  main.c
//  BMICalc
//
//  Created by maemolee on 15/10/18.
//  Copyright © 2015年 maemolee. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//声明Person结构，最后一定要加分号。
//struct Person{
//    float heightInMeters;
//    int weightInKilos;
//};

//
typedef struct{
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMassIndex(Person p){
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}

int main(int argc, const char * argv[]) {
    //struct
    Person *mikey = (Person *)malloc(sizeof(Person));
    mikey->heightInMeters = 1.8;
    mikey->weightInKilos = 96;
    
    //struct
    //Person aaron;
    //aaron.heightInMeters = 1.97;
    //aaron.weightInKilos = 84;
    
    //printf("mikey is %.2f meters tall\n", mikey.heightInMeters);
    //printf("mikey weighs %d kilograms\n", mikey.weightInKilos);
    //printf("aaron is %.2f meters tall\n", aaron.heightInMeters);
    //printf("aaron weighs %d kilograms\n", aaron.weightInKilos);
    
    float bmi;
    bmi = bodyMassIndex(*mikey);
    printf("mikey has a BMI of %.2f\n", bmi);
    
    //bmi = bodyMassIndex(aaron);
    //printf("aaron has a BMI of %.2f\n", bmi);
    
    free(mikey);
    mikey = NULL;
    
    return 0;
}
