#include<stdio.h>

void swap(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("swap function:\nx = %d \n  y = %d\n",x,y);
}

int main(){
    int a = 10, b = 20;
    swap(a,b);
    printf("main:\na = %d \n  b = %d\n",a,b); //�쥻�g���o��AB��m�n����
	                                          //���ɻݭn�Ψ�POINTER�ӥ洫
											  //�|�����ߪ���]�OXY����AB��������
											  //�n�ϥL���߻ݭn�[& ���L�洫���O�I�᪺�a���ӫD¾ 
    return 0;
}
