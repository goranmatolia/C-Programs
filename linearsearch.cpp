#include<iostream>
using namespace std;
int main()
{
    int A[10],n=10,key;
    for(int j=0;j<n;j++){
        cin>>A[j];
    }
    cout<<"Enter Key";
    cin>>key;
    for(int i=0;i<n;i++){
        if(A[i]==key){
            cout<<"Search Successfull,index is "<<i;
            return 0;
        }
    }
    cout<<"Search Unsuccessfull";
}