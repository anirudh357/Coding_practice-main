#include<iostream>
using namespace std;

// Using the void
void printAddition(int a, int b){
    cout<<"Print: "<<a+b<<endl;
}

// Using the int
int add(int x, int y){
    return x+y;
}

int main(){
    int a=10, b=20;
    printAddition(a, b);
    cout<<add(a, b)<<endl;
}