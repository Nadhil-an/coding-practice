#include<iostream>
using namespace std();
int main(){
    int n = 1234
    int lastdigit

    while(n>0){
        lastdigit =  n%10;
        cout<<lastdigit;
        n = n/10
    }
}