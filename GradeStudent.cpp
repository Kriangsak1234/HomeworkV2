#include<stdio.h>
int main(){
	int score;
	
		printf("\nScore Student : ");
	scanf("%d",&score);
	if (score>=80 && score<=100){
		printf("\nGrade A");
	}else if (score>=75 && score<=79){
		printf("\nGrade B+");
	}else if (score>=70 && score<=74){
		printf("\nGrade B");
	}else if (score>=65 && score<=69){
		printf("\nGrade C+");
	}else if (score>=60 && score<=64){
		printf("\nGrade C");
	}else if (score>=55 && score<=59){
		printf("\nGrade D+");
	}else if (score>=50 && score<=54){
		printf("\nGrade D");
	}else if (score<50 && score>=0){
		printf("\nGrade F");
	}else if (score>=101){
		printf("\nERROR");
	}else if (score<0){
		printf("\nERROR");
	}
		return 0;
	}


