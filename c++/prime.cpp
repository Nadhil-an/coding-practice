// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int count = 0;

//     for(int i = 1; i <= sqrt(n); i++) {
//         if(n % i == 0) {
//             count += 2; 
// i and n/i are both divisors
//             if(i == n/i) {
//                 count--; // perfect square, only count once
//             }
//         }
//     }

//     if(count == 2) {
//         cout << "true";
//     } else {
//         cout << "false";
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int count=0;

//     cin>>n;

//     for(int i=1;i<=n;i++){

//         if(n%i == 0){
//             count++;
//         }
//     }

//     if(count == 2){
//         cout<<"true";
//     }else{
//         cout<<"false";
//     }
// }