#include<iostream>
using namespace std;

int cut = 0;

void func() {
    if(cut == 3) {
     cout << cut << endl;  // print when cut reaches 3
        return;
    }
 cut++;
 func();
}

int main() {
func();
 return 0;
}
