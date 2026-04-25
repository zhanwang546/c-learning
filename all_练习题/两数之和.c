#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
//	[两数之和],给定一个整数数组nums和一个整数目标值target，在该数组中找出和为目标值target的那两个整数，并返回它们的数组下标。
//	你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。你可以按任意顺序返回答案
//考察数组，判断，循环,暴力枚举法 
int sums[]={4,6,8,9};
int target=17;
int i,j;
for(i=0;i<4;i++) {
	for(j=i+1;j<4;j++){
		if(sums[i]+sums[j]==target) 
		printf("其两个下标为：%d %d\n",i,j); 
		break;
	}
}
	return 0; 
} 
