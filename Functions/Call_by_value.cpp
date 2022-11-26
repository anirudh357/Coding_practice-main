#include<iostream>
using namespace std;

void callByValue(int x){
    x=x+1;
}
int main(){
    int a=1;
    cout<<a<<endl;
    callByValue(a);
    cout<<a<<endl;
}