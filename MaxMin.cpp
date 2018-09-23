#include<stdio.h>
int main(){
	int x1;
	int x2;
	int x3;
	printf ("----Put 3 numbers---- ");
	printf("\n\n\nnumber1 :");
	scanf("%d",&x1);
	printf("\nnunber2 :");
	scanf("%d",&x2);
	printf("\nnumber3 :");
	scanf("%d",&x3);
    if(x1>x2 && x2>x3){
    	printf("\nMax :%d\nMin :%d",x1,x2);
	}else if(x1>x3 && x3>x2){
		printf("\nMax :%d\nMin :%d",x1,x3);
	}else if(x2>x1 && x1>x3){
		printf("\nMax :%d\nMin :%d",x2,x1);
	}else if(x2>x3 && x3>x1){
		printf("\nMax :%d\nMin :%d",x2,x3);
	}else if(x3>x1 && x1>x2){
		printf("\nMax :%d\nMin :%d",x3,x1);
	}else if(x3>x2 && x2>x1){
		printf("\nMax :%d\nMin :%d",x3,x2);
	}else if(x1==x2 && x1==x3 &&x2==x1 &&x2==x3 &&x3==x1 &&x3==x2){
		printf("\nequal :%d",x1);
	}else if(x1==x2 && x2!=x3 && x1!=x3){
		printf("\nNumber1:%d = Number2: %d",x1,x2);
	}else if(x1==x3 && x3!=x2 && x1!=x2){
		printf("\nNumber1:%d = Number3:%d",x1,x3);
	}else if(x2==x3 && x3!=x1 && x2!=x1){
		printf("\nNumber2:%d = Number3:%d",x2,x3);
	}
	return 0;
}
