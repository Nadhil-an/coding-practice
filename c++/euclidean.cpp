#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main(){
    int a= gcd(76,48);
    cout<<a;
    return 0;

}