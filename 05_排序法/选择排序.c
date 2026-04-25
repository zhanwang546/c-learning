#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	//选择排序法，每轮选最max或min放已排序列末尾，以下是升序例子 
	//降序的话把第15行的不等号方向改为大于即可 
	int arr[]={88,99,77,66,55,77};
	int i,j,a;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n-1;i++)
	{
		int min=i;//假设当前i是最小值下标
		for(j=i+1;j<=n-1;j++)//j从i+1开始，不重复比较，j遍历n-1次 
		{
			if(arr[j]<arr[min])
			{
				min=j;//更新最小值 
			}
		}//内层循环结束后，统一交换一次
	 	a=arr[i];
		arr[i]=arr[min];
		arr[min]=a;  
	}	
	printf("选择排序结果(升序)：");
	for(i=0;i<n;i++) 
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
