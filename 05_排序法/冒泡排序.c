#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	//冒泡排序 ,相邻元素两两比较，大的排后 
    int arr[]={89,66,65,83,90,77};
    int i,j;
    int n=sizeof(arr)/sizeof(arr[0]);//计算数组长度公式，总内存大小除于一个元素大小等于元素个数 
	for(i=0;i<n-1;i++)
	{
	    for(j=0;j<n-1-i;j++)
		{
	    	if(arr[j]<arr[j+1])
			{
		    	arr[j+1]=arr[j+1]+arr[j];//“加减法”原地代换，乘除法亦类似 
		    	arr[j]=arr[j+1]-arr[j];
		    	arr[j+1]=arr[j+1]-arr[j];
			}
		}
	}	
	printf("冒泡排序结果："); 
	for (int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);//%d后面加空格，输出结果一目了然 
	}
	return 0;
}
