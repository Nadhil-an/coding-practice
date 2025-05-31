#include<iostream>
using namespace std;
int main(){
    int n=25734;
    int count=0;

    while(n>0){
        count = count + 1;
        n = n / 10;
    }
    
    cout<<endl<<count<<endl;


}