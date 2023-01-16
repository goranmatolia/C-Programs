#include<iostream>
using namespace std;
int main()
{
    int A[10]={3,5,7,9,12,14,16,17,19,34};
    int n=10;int key,mid=0,l=0,h=9;
    cout<<"Enter the key";
    cin>>key;
    while(l<=h){
        mid=(l+h)/2;
        if(key==A[mid]){
            cout<<"found at "<<mid;
            return 0;}
        else if(key<A[mid])
            h=mid-1;
        else
            l=mid+1;
}
    cout<<"Not found";
    return 0;
    
}