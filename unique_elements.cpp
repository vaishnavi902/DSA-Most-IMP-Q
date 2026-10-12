//To finding the unique elemnets from the sorted array 
#include <iostream>
using namespace std;

int main() {
    int arr[] = {0,1,1,2,2,2,2,3};
    int n = 8;

    int i = 0 , j = 0 ;
    while(j < n){
        if(arr[i] == arr[j]){
            j++;
        }
        else{
            cout<< arr[i] <<" ";
            arr[i] = arr[j];
        }
    }
    cout<< arr[i] <<endl;
    return 0;
}
