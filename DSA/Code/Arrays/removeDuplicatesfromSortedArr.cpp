#include<bits/stdc++.h>
using namespace std;

// ---------- APPROACH ----------
/*
 1. Take a variable i as 0;
 2. Use a for loop by using a variable ‘j’ from 1 to length of the array.
 3. If arr[j] != arr[i], increase ‘i’ and update arr[i] == arr[j].
 4. After completion of the loop return i+1, i.e size of the array of unique elements. 
*/

int remDups(int arr[], int size){
    int i = 0;
    for(int j = 1; j < size; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    int newSize = remDups(arr, size);
    for(int i = 0; i < newSize; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}