#include<iostream>
#include<string>
using namespace std;
class Carrots{
    int weight;
    int length;
    
public:
    Carrots();//�غc���
    Carrots(int w,int l);//�غc���
    ~Carrots();//�Ѻc���
    void show();
};

Carrots::Carrots(){
    weight = 50; //defalut constructor
    length = 10;
}
Carrots::Carrots(int w,int l){
    weight = w; //defalut constructor
    length = l;
}

Carrots::~Carrots(){
    cout << "delete carrots" << endl;
}
void Carrots::show(){
    cout <<"weight : " << weight << endl;
    cout <<"length : " << length << endl;
}
int main(){
    Carrots obj;
    Carrots obj2(30,30);
    obj.show();
    obj2.show();
    return 0;
}
