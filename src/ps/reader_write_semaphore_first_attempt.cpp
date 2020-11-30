#include<iostream>
using namespace std;
void write(void){cout <<"writing"<<endl;}
void read(void){cout<<"reading"<<endl;}
void ReminingWork(void){}

semaphore wx = 1;

void writer(void){
  do{
    wx.P();
    write();
    wx.V();
    ReminingWork();
  }while(1);
}

void reader(void){
    do{
        wx.P();
        read();
        wx.V();
        ReminingWork();
    }while(1);
}

int main(){
  cobegin{ philosopher(0); philosopher(1);
    philosopher(2); philosopher(3); philosopher(4);
  }
  return 0;
}
