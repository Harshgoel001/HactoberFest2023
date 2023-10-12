#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp ;
    int sum =0;
    while(n!=0){
        int digit = n%10;
        sum = sum*10+digit;
        n = n/10;
    }
    
    
    if(temp== sum)
    cout<<"Palindrome";
    else
    cout<<" Not Palindrome";
    return 0;
}
