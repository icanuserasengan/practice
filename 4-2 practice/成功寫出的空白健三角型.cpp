#include<stdio.h>
int main(){
	int input = 0;
	scanf("%d",&input);
	for(int i = 0;i < input;i ++){
			printf("\n");
		for(int j = input ;j > i;j --){  //�ڭ쥻�Q�k�Oinput - 1�}�l ���ҥH���׬Oj = input�O�]���O�q0�}�l�ҥH�n�۰ʥ[�@ 
			printf(" ");
		}
		for(int k = 0;k <= i;k ++){
			printf("*");
		}
	
	}
	
	
	
	return 0;
}
