#include<iostream>
using namespace std;

int main(){
    int a[100]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    int key=8;
    bool isFoundkey=false;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            isFoundkey=true;
            break;
        }
    }
    if(isFoundkey==true){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }
}