#include<stdio.h> 
int main (){
	int a[5];
	int total=0,average=0;
	for(int i = 0; i < 5 ; i++){
		scanf("%d",&a[i]);
		total = total + a[i];
		average = total/5 ;         //�o�̫�򥴤���n 
	}
	
	
	printf("���Z�`�� = %d\n",total);
	printf("average = %d",average);
	
	
	
	
	
	
	return 0 ;
}
