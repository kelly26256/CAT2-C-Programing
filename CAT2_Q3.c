/*
Name:Kelly Mwiti Muriuki
REG NO:CT100/G/26256/25
DESCRIPTION:write input, process and display file
*/

#include<stdio.h>

//ask user for 10 integers and store in input.txt
void writeintegerstofile(){
	FILE *fptr;
	fptr = fopen("input.txt", "w");
	if(fptr == NULL){
		printf("There is  an error opening input.txt for writing");
		return;
	}
	
	int i, num;
	printf("Enter 10 integers:\n");
	for(i=0; i<10; i++){
		num;
		scanf("%d", &num);
		fprintf(fptr, "%d\n", num);
	}
	fclose(fptr);
}
	
	//read integers, calculte sum and average
	//write them in output.txt
	void calculatesumandaverage(){
	FILE *inputfile, *outputfile;
	int num, sum=0, count=0;
	float average;
	
	inputfile = fopen("input.txt", "r");
	if(inputfile == NULL){
		perror("There is  an error opening input.txt for reading\n");
		return;
	}
	
	outputfile = fopen("output.txt", "w");
	if(outputfile == NULL){
		perror("There is  an error opening output.txt for writing\n");
		fclose(inputfile);
		return;
	}
	
	while(fscanf(inputfile, "%d", &num) == 1){
		sum +=num;
		count++;
	}
	
	average = (float)sum / count;
	fprintf(outputfile, "sum = %d\naverage = %.2f\n", sum, average);
	fclose(inputfile);
	fclose(outputfile);
}

//dispal file content
void displayfile(){
	FILE *fptr;
	char ch;
	
	printf("file content of input.txt\n");
	fptr = fopen("input.txt", "r");
	if(fptr != NULL){
		while((ch = fgetc(fptr)) != EOF)
			putchar(ch);
		fclose(fptr);
	}
}
int main(){
	writeintegerstofile();
	calculatesumandaverage();
	displayfile();
	return 0;
}