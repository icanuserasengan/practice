#include <stdio.h>
int main(void) {
    int b = 2;
    int* pointer ;
 //   printf("�ܼ� b ���ȡG%d\n", b);
  //  printf("�ܼ� b ���a�}�G%p\n", &b);
  //  printf("pointer ���ȡG%p\n", pointer);
  //  printf("\n"); //����
    
    
    *pointer = 100;
    printf("*pointer ���ȡG%d\n", *pointer);
    printf("�ܼ� b ���ȡG%d\n", b);
    printf("�ܼ� pointer ���a�}�G%p\n", &pointer);
    return 0;
}
