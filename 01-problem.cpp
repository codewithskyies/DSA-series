#include <iostream>
using namespace std;


 int cnt=0;
 void print(){

    if (cnt ==0) return;

    cout<<cnt << endl;
    cnt++;
    print();


    

 }

int main() {
   freopen ("input.txt","r",stdin);
   freopen ("output.txt","w",stdout);

   print();

   return 0;
