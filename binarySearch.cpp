#include <bits/stdc++.h>
using namespace std;


// time complexity : log(n) (worst case)

int binarySearch(int nums[], int n, int key){
    int l = 0;
    int h = n-1;
    while( l <= h ){
        int m = (l+h)/2;
        if(nums[m] == key){
            return m;
        }
        else if(nums[m] > key){
            h = m-1;
        }
        else{
            l = m+1;
        }
    }
    return -1;
}

int main (){

    int nums[] = {1,2,3,4,5,6,67,70};
    int n = sizeof(nums)/sizeof(nums[0]);
    int key;
    cout << "Enter key";
    cin >> key;

    cout << binarySearch(nums, n, key);
    return 0;
}
