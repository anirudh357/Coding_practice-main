#include<iostream>
using namespace std;

int main(){
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        int mi=i;
        for(int j=i+1;j<n;j++){
            if(a[mi]>a[j]){
                mi=j;
            }
        }
        int temp=a[i];
        a[i]=a[mi];
        a[mi]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}