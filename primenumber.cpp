#include<iostream>

using namespace std;

int main()
{
    int count=0,n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count+=1;
        }
    }
    if(count>2){
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
}