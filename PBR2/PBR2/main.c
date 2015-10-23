#include <stdio.h>
#include <math.h>

void metersToFeetAndInches(double meters, double *ftPtr, double *inPtr){
    //这个函数假定meters的值是非负数
    
    //将meters变量的值转化为feet的值，类型为浮点数
	double rawFeet = meters * 3.281; // e.g. 2.4536
    
    //计算类型为无符号的整形feet变量的值
	//unsigned int feet = (unsigned int)floor(rawFeet);
    
    //计算类型为双浮点inches变量的值，并将整数部分直接存入指针ftPtr所引用的变量中
    double inches = 12 * modf(rawFeet, ftPtr);
    printf("Storing value to the address %p\n", ftPtr);
    
    //将feet变量的值出存在提供的地址里
    //if (ftPtr) {
    //    printf("Storing %u to the address %p\n", feet, ftPtr);
    //    *ftPtr = feet;
    //}
    
    //计算英寸
	//double fractionalFoot = rawFeet - feet;
	//double inches = fractionalFoot * 12.0;
	
    //将inches变量的值保存到传入的地址
    if (inPtr) {
        printf("Storing %.2f to the address %p\n", inches, inPtr);
        *inPtr = inches;
    }

}


int main(int argc, const char * argv[]){
	double meters = 3.0;
	double feet;
	double inches;
    
	metersToFeetAndInches(meters, &feet, &inches);
	printf("%.1f meters is equal to %.0f feet and %.1f inches.", meters, feet, inches);
    
	return 0;
}