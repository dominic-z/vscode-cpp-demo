#include<iostream>

using namespace std;

class Base{
public:
    virtual void func();
protected:
    int m_a;
    int m_b;
};

void Base::func(){
    cout<<"base"<<endl;
}

class Derived:public Base{
public:
    void func();
private:
    int m_c;
};
void Derived::func(){
    cout<<"Derived"<<endl;
}

int main(){
    Base *p;
    int n;
    cin>>n;

    if(n<=100){
        p=new Base();
    }else{
        p=new Derived();
    }
    p->func();
    cout<<typeid(*p).name()<<endl;
    return 0;
}