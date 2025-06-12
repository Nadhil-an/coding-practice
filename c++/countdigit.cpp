#include<iostream>
using namespace std;
int main(){
    int n=25734;
    int count=0;

    while(n>0){
        int ld = n%10;
        cout<<"last digits are:"<<ld<<endl;
        n = n / 10;
    }
    
    cout<<endl<<count<<endl;


}