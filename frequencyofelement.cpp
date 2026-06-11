#include <iostream>
using namespace std;

int main(){

    int arr[]={1,2,2,3,4,4,5,6,6,7};
    int n =sizeof(arr)/sizeof(arr[0]);


    for ( int i=0; i< n;i++){
        int count=1;
        for(int j=0;j<i+1;j++){
            if(arr[i]==arr[j]){
                count++;

            }

        }
cout<<"frequency of "<<arr[i]<<"is"<<count<<endl;


    }


    return 0;
    



    }



