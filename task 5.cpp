#include<iostream>
using namespace std;
int main(){
    int*p=new int(50);
    cout << "*p before delete:" << *p << endl;
    delete p;
    p = nullptr;
    cout << "pointer safely set to nullptr after delete.endl";
    return 0;
}