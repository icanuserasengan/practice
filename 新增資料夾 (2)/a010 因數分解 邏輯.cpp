#include<stdio.h> 
int main(){
	int num=0,n=2,s=0;
	scanf("%d",&num);
	while(num >= n){
		if(num % n == 0 ){
			s = 0;                   //�o�̩�s = 0�ӧ�  if �⪺�Ʀr�O12
			while(num%n==0){         // �@�� 2���� num�|�O 3  �B�b 2���̫�@��
				num = num/n ;        // �N�w�g�X�{ *��    s=0 �i�H�N 1(num) = 3/3 
				s++ ;                //�ѩ�3�j�� �Q�M0 �u��@�� �N�i�H��U����12-13�檺�F�� 
			}
			if(s == 1){             //��ƥu�|�Q���ɤ@��  
				printf("%d",n);
			}else{
				printf("%d^%d",n,s);
			}		
			if(num != 1)
				printf(" * ");
					
		}
		n++;
	}
	return 0 ;
}













/*
#include<stdio.h> 
int main(){
	int num=0,n=2,s=0;
	scanf("%d",&num);
	while(num >= n){
		if(num % n == 0){
			while(num % n == 0){
				num = num/n ;           //25/5=5 5/5=1
				s++ ;
			}
	    	if(num % n == 1){           //���� num= 1 
				printf("n = %d",n);         
			}else{
				if(num % n == 0){
					printf("num = %d^%d",num,s);
				}else{
					printf("mm = * ");
				}	
			}	
		}

		n++;
	}
	return 0 ;
}
*/

