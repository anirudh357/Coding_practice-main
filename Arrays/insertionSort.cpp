#include<iostream>
using namespace std;

int main(){
    int a[]={5,3,2,4,1}, HPC, i, j;
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++){
        HPC=a[i];
        for(j=i-1;j>=0;j--){
            if(a[j]>HPC){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=HPC;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;

    return 0;
}