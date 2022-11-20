#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Sorting - O(N*log(N))
// int main(){
//     int a[]={1,4,8,36,55};
//     int n=sizeof(a)/sizeof(int);
//     sort(a.begin(), a.end());
//     cout<<"Largest: "<<a.size()-1<<endl;
// }

// O(N)
int main(){
    int a[]={1,4,8,36,55};
    int n=sizeof(a)/sizeof(int);
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    cout<<"Largest: "<<largest<<endl;
}
