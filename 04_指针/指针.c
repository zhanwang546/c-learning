#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	//指针，即存储内存地址的变量；语法为*指针变量名
	//若是把变量比作“房间”，指针就是“写着房间门牌号的纸条” 
	int a=10;
	int *p;//定义一个int类型的指针变量p
	p=&a;//让p指向变量a的地址 
	printf("a的值：%d\n",a);//输出a的值，即10 
	printf("a的地址：%p\n",&a);//输出a的内存地址；%p是输出内存地址，以十六进制形式显示 
	printf("p的值：%p\n",p);//输出p里存的地址（和&a相同） 
	printf("*p的值：%d\n",*p);//输出p指向的变量值
	*p=25;//通过指针修改a的值 
	printf("修改后a的值：%d\n",a); 
	return 0; 
}
