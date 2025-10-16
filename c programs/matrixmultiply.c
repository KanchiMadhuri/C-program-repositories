#include<stdio.h>
void multiplymatrix(int matrix1[2][2],int matrix2[2][2],int result[2][2])
{ int i,j,k;
	for(i=0;i<2;i++)
	{
		for( j=0;j<2;j++)
		{
			result[i][j]=0;
			for( k=0;k<2;k++)
			{
				result[i][j]+= matrix1[i][k] * matrix2[k][j]; 
			}
		}
	}
}
void printmatrix(int matrix[2][2])
{ int i,j;
	for( i=0;i<2;i++)
	{
		for( j=0;j<2;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int matrix1[2][2] = {
	{1,2},
	{3,4}
	};
	int matrix2[2][2]= {
	{5,6},
	{7,8}
	};
	int result[2][2];
	multiplymatrix (matrix1,matrix2,result);
	printf("matrix 1: \n");
	printmatrix(matrix1);
	printf("matrix 2: \n");
	printmatrix(matrix2);
	printf("result matrix: \n");
	printmatrix(result);
	return 0;
}
