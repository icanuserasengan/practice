#include<stdio.h>
struct date{
    int month;
    int day;
};

struct newdata{
    char name[15];
    int score;
    struct date birthday;
};

int main(){
    struct newdata student[5];                
    for(int i = 0;i < 5;i ++){              			//�o�̤����߭�]�O SCANF�u��ѼƦr    IF �e���[name = %S �n������ܭ^��W�r�]�n 
        scanf("name = %s",student[i].name);				//�� name = amy  �~�|��� amys birthday = %S 
        scanf("score = %d",&student[i].score);
        scanf("birthday.month = %d\n birthday.day = %d",&student[i].birthday.month,&student[i].birthday.day);
    }
    for(int i = 0;i < 5;i ++){
        printf("%s's birthday is %d,%d \n",student[i].name,student[i].birthday.month,student[i].birthday.day);
        printf("He got %d points!",student[i].score);
    }
    return 0;
}
