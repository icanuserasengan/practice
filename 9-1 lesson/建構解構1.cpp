#include<iostream>
#include<string>
using namespace std;
class Carrots{
    int num;
public:
    Carrots();//�غc���
    ~Carrots();//�Ѻc���
    void show();
};

Carrots::Carrots(){
    num = 50; //defalut constructor
}

Carrots::~Carrots(){
    cout << "delete carrots" << endl;
}
void Carrots::show(){
    cout << num<<endl;
}
int main(){
    Carrots obj;
    Carrots obj2;
    obj.show();
    return 0;
}

