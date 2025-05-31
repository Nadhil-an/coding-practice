#include<iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    int ld;
    int dup;

    cout<<"Enter a number:";
    cin>>n;

    dup = n;

    while(n > 0){
        ld = n % 10;
        rev = (rev * 10)+ld;
        n = n/10;
    }
    if(dup == rev){
        cout<<"it is pallindrome";
    }else{
        cout<<"its not pallindrome";
    }
        
}