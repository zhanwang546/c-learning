#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    //常量和变量，数据类型(整型int,浮点型float（单精度，短）,double（双精度，长），字符型char)
    int a = 5;
    //&读作取地址，获取变量在内存中的地址
	//整型是%d 浮点型是%f,字符型是%c（.3f 表示有三位小数点,lf表示更长精度的浮点型）
    printf("请输入一个整数:");
    scanf("%d", &a);//输入语句scanf（格式控制，地址表列）“就是从键盘读取scanf括号里面的数据，前面定义的a的数值会被覆盖掉” 
    printf("%d\n", a);//输出语句printf（格式控制，输出表列）；\n为换行符 
    return 0;
}
