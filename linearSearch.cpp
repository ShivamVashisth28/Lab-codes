#include <bits/stdc++.h>
using namespace std;

int linearSearch(int nums[], int n, int key){
    for(int i=0; i<n; i++){
        if(nums[i] == key) return i;
    }
    return -1;
}

int main (){

    int nums[] = {1,2,3,4,5,6,67,7};
    int n = sizeof(nums)/sizeof(nums[0]);
    int key;
    cout << "Enter key";
    cin >> key;

    cout << linearSearch(nums, n, key);
    return 0;
}