#include<iostream>
using namespace std;

bool checkPrimes(int n){
    for(int i=2;i<=n-1;i++){       // 2 to n-1
        if(n%i==0){
            return false;
        }

    }
    return true;
}

void printAllPrimes(int n){
    for(int no=2;no<=n;no++){
        if(checkPrimes(no)==true){
            cout<<"Prime no: "<<no<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;
    printAllPrimes(n);
}