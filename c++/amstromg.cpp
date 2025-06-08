#include<iostream>
using namespace std;
int main(){
    int n;
    int dup;
    int ld;
    int sum =0;


    cout<<"enter a number :"<<endl;
    cin>>n;
    dup = n;

    while(n > 0){
        ld = n % 10;
        sum +=ld*ld*ld;
        n=n/10;
    }

    if(sum == dup){
        cout<<"its amstrong number";
    }else{
        cout<<"its not an amstrong number";
    }

}