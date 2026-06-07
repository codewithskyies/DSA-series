#include <iostream>
using namespace std;

bool isPowerOfTwo(int n){
    if (n<=0) return false;


    while (n%2==0) {
        n /=2;

    }

    return(n==1);



}

int main () {
    int num ;
     cout << "Enter the number \n";
     cin >>num ;
     if (isPowerOfTwo(num))
     
     cout << "num is power of 2 \n";
     else 
     cout << "num is not power of 2\n";

     return 0;


}