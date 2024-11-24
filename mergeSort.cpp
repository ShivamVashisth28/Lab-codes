#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    vector<int > temp;
    int left = low;
    int right = mid +1;
    while( left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left++]);
        }else{
            temp.push_back(arr[right++]);
        }
    }

    while(left <= mid){
        temp.push_back(arr[left++]);
    }

    while(right <= high){
        temp.push_back(arr[right++]);
    }

    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }

}

void mergeSort(int arr[], int low, int high){
    if(low < high){
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

void print(int nums[], int n){
    for(int i=0; i< n; i++){
        cout << nums[i] << " ";
    }

    cout << endl;
}

int main () {

    int nums[] = {7,6,3,1,3,4,4,5,4,3,-1,-4,10};
    print(nums,13);
    mergeSort(nums,0,12);
    print(nums,13);
    return 0;
}