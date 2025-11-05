/*
Name:Kelly Mwiti Muriuki
REG NO:CT100/G/26256/25
DESCRIPTION:Printing a 2D array
*/

#include<stdio.h>
int main(){
	int i, j;
	
	//scores1 array initialization and declaration
	int scores1[2][2] = {
	{65, 92},
	{84, 72}
	};
	
	//scores2 array initialization and declaration
	int scores2[2][2] = {
	{35, 70},
	{59, 69}
	};
	
	//print elements of scores1 array
	printf("Elements of scores1 array\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d", scores1[i][j]);
		}
		printf("\n");
	}
	
	//print the elements of scores2 array
	printf("Elements of scores2 array\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d", scores2[i][j]);
		}
		printf("\n");
	}
	return 0;
}