#include<stdio.h>
//#define CLOCK int

typedef struct{
    int minite;
    float second;
} time;

typedef struct {             //typedef structe��struct mydata
    int month;               //�t���h �W�r�\�e�\�� 
    int day;
} date;

struct mydata{
    char name[15];
    int score;
    date birthday;
};

int main(){
    //typedef int clock;
    //clock hour, second;
    //CLOCK hour, second;
    
    time data = {3, 2.75};
    //time data;  
    //scanf("%d %f",&data.minite,&data.second);
    printf("%d %f",data.minite,data.second);
    
    return 0;
}
