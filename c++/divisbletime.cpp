#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n=26;
    vector<int>divisor;
    for(int i=1;i<sqrt(n);i++){
        if(n%i == 0){
            divisor.push_back(i);
        }
        if(i != n/i){
            divisor.push_back(n/i);
        }
    }    
    sort(divisor.begin(),divisor.end());
    cout<<"the divisor number of "<<n<<" in sorted :";

    for(int d: divisor){
        cout<<d<<" ";

    }

    
}