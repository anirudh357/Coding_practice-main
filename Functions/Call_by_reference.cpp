#include<iostream>
using namespace std;

void callByReference(int &x){
    x=x+1;
}


int main(){
    int a=1;
    cout<<a<<endl;
    callByReference(a);
    cout<<a<<endl;
}