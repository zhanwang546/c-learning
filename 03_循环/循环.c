#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
//单循环，for语句实现循环 
//for(初始化；条件；增量）{循环体} 
int result[5]={80,88,65,99,98};
int i;
  for(i=0;i<5;i++)
  {
	printf("student%d的成绩：%d\n",i+1,result[i]); 
  }//i+1是因为数组下标是从0开始的（result[0]是第一个成绩），但学生的序号是从1开始的（student1、student2）
	return 0; 
} 
