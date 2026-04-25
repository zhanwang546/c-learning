#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
//二维数组，即数组里面套数组，像一个表格（行+列）；两层循环 
//数组名[行][列] 
int result[3][5]={{80,85,75,95,65},{81,86,76,96,66},{82,87,77,97,67}};
int i,j;
for(i=0;i<3;i++){//外层循环；行
  for(j=0;j<5;j++) {//内层循环：列 
  printf(" %d",result[i][j]);	
  }
  printf("\n");
}
return 0;
}
