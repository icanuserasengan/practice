#include <stdio.h>
#include <stdlib.h>

void Load(int *number,int array[]){
    FILE *fp;
    int i;
    char* filename = "C:\input.txt";     //�o�̩񪺦���m 
    fp = fopen(filename, "r");           // fopen�o�O�ʵ� 
    if (fp == NULL){                     //�ť��ɮפ��ANULL 
        printf("Could not open file %s",filename);
    }
    fscanf(fp,"%d",number);              // fscanf�o�ʵ� 
    if(*number > 0){
        for( i = 0;i < *number;i ++){
            fscanf(fp,"%d",&array[i]);
        }
    }
    printf("Loading data from intput.txt completed\n");
    fclose(fp);
}
