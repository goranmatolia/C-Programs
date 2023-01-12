#include<iostream>

using namespace std;

int main()
{
    int sum=0,r,n;
    cin>>n;
    int m=n;
    while(n>0){
        r=n%10;
        n=n/10;
        sum+=r*r*r;
    }
     if(sum==m)
        cout<<"armstrong"<<endl;
    else
        cout<<"not armstrong"<<endl;
}