#include <iostream>
using namespace std;


void ChangeArry(int arry[], int size){
cout << "in function \n";

for (int i=0; i<size; i++){
    arry[i]=2*arry[i];

}


}
int linaerSearch(int arr[],int size, int target){
    for (int i=0; i<size; i++){
        if (arr[i]==target){
            return i;


        }
    }

    return -1;



}

void ReverseArray(int arr[],int size){
    int start=0,end =size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start ++;
        end--;


    }
}
int main () {
    int arr[]={4,5,6,78,23};
    int sz=5;
    int target=58;
    ReverseArray(arr,sz);
    for (int i=0;i<sz; i++){
        cout << arr[i]<<" ";
        
    }







    cout << linaerSearch(arr,sz,target)<< endl;
























    

    
        return 0;

}

// reverse array





