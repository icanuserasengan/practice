#include<stdio.h>
int main(){
	int num[10];
	for(int i = 0;i <10;i++){
		scanf("%d",&num[i]);
	}
	
	int l=0,r=0;
	while(1){                                 //WHILE �̫�A�� 
		printf("L R :");                      //�q�`�n�U��IF�����p ���LBREAK 
		scanf("%d %d",&l,&r);
		if(l == 0 && r == 0){
			break;
		}
		printf("ANS = ");
		for(int i = 0;i < 10;i++){             //��� �p�G�n�L�Y�ӽd�򪺸�� 
			if(num[i] >= l && num[i] <= r){    //p���k�n���^����L �A�{IF�P�_��  
				printf("%d",num[i]);
			}	
		}
	
		printf("\n");
	}
	
	
	
	
	return 0 ;
}
