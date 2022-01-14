#include<stdio.h>
#include "Pre_Loaddata.c"
#include "Pre_Writedata.c"
void InsertionSort(int number,int array[]);
void printArray(int number,int array[]);

int main(){
    int number,*array;
    Load(&number,array);           //�۳Ъ��禡 �q�`���g�b�᭱ 
    printf("The total numbers are %d\n"
    "================================================\n",number);
    printArray(number,array);      //printArray�o�O�ʵ� 
    InsertionSort(number,array);   //InsertionSort�o�]�O�ʵ� 
    printf("================================================\n");
    printArray(number,array);
    Write(&number,array);
    return 0;
}

void printArray(int number,int array[]){  //�ʵ��۳Цb�o�� 
	int i ;
    for( i = 0;i < number;i ++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

void InsertionSort(int number,int array[]){
    int j,i,key;
    for(j = 1;j < number;j ++){
        key = array[j];
        i = j-1;
        while(i>0 && array[i]>key){
            array[i+1] = array[i];
            i = i-1;
        }
        array[i+1] = key;
    }
}
