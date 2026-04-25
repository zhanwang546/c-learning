#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	//插入排序法，未排序元素插入到已排序序列的合适位置，以下是降序例子 
	//升序的话就把第14行&&（与）运算符的右侧不等号改为大于即可 
	int arr[]={ 88,99,77,66,55,77 };
	int i,j,a;
	int n=sizeof(arr)/sizeof(arr[0]);
	for (i=1;i<n;i++)
	{
		 a=arr[i];//未排序的先存起来 
		 j=i-1;//已排序区间的末尾下标
		 while (j>=0 && arr[j]<a)
		{
			arr[j+1]=arr[j];//元素后移，给出位置
			j--;//向前继续比较
		}
		arr[j+1]=a;//插入到最终位置
	}
	printf("插入排序结果(降序)：");
	for (i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
