#include<iostream>
using namespace std;

int main()
{

    int digit,n;
    cin>>n;
    while(n>0){
        digit=n%10;
        n=n/10;
        cout<<digit<<" "<<endl;
    }
    //display digits in reverse, seperated by space
}