#include <stdio.h>
#include <stdlib.h>


void Write(int *number,int array[]){
	int i ;
    FILE *f = fopen("C:\output.txt", "w");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        exit(1);                           //���I��BREAK���Pı  
    }                                      //�p�G�S���\�N�B�n���U���F 
    fprintf(f,"%d\n",*number);             //fprintf�ʵ� 
    for( i = 0;i < *number;i ++){
        fprintf(f,"%d\n",array[i]);
    }
    printf("Writing data to output.txt completed\n");
    fclose(f);                             //fclose�ʵ� 
}   

