#include<iostream>
#include<thread>
using namespace std;
// g++ -std=c++11 -pthread 
void f(void){
  cout << "In thread " << endl;
  cout << "the next output in thread" << endl;
}

int main(){
  thread t(f);
  cout << "In main" << endl;
  cout << "second in main" << endl;
  return 0;
}
