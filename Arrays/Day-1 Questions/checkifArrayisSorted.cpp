#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);

    bool isSorted=true;
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            isSorted=false;
        }
    }

    if(isSorted==true){
        cout<<"Sorted"<<endl;
    }
    else if(isSorted==false){
        cout<<"Array is not sorted"<<endl;
    }
}