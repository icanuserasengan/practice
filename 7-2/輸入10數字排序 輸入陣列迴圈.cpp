#include<stdio.h>
int main(){
	int j=0 ,tem=0;
	int num[10]={0};
	printf("please enter 10 number :");
	for(int i = 0;i < 10;i++){         
		scanf("%d",&num);
		for(j=0;j<10;j++){
			if(num[j]>num[j+1]){
		
			tem = num[j];
			num[j] = num[j+1];
			num[j+1] = tem;	
		}
		}
	}
	
	for(int i=0;i<10;i++){
		printf("%d\n",num[i]);	
	}	
	return 0 ;
}

/*int main(){
	int j=0 ,tem=0;
	int num[10]={0};
	printf("please enter 10 number :");
	for(int i = 0;i < 10;i++){            //�o�̬O���b�C���ڮѤ@�ӥ��N�|������� 
		scanf("%d",&num);                 //��J213 �L�N�|�����ƧǷ|���᭱�u���9 10 �o�� 
		if(num[j]>num[j+1]){              //�����Ӥj�p��J�� 
		
			tem = num[j];
			num[j] = num[j+1];
			num[j+1] = tem;	
		}
	}
	
	for(int i=0;i<10;i++){
		printf("%d\n",num[i]);	
	}	
	return 0 ;
}
*/

  
