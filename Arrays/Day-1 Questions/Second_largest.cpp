#include<iostream>
using namespace std;

int main(){
    int a[]={1,25,3,44,5};
    int n=sizeof(a)/sizeof(int);
    int largest=INT_MIN, smallest=INT_MAX, second_largest=INT_MIN, second_smallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }

        if(a[i]>largest){
            largest=a[i];
        }
    }
    // second ki bari
    for(int i=0;i<n;i++){
        if(a[i]<second_smallest && a[i]!=smallest){
            second_smallest=a[i];
        }
        if(a[i]>second_largest && a[i]!=largest){

            second_largest=a[i];
        }
    }

    cout<<"second_smallest: "<<second_smallest<<endl;
    cout<<"second_largest: "<<second_largest<<endl;
}