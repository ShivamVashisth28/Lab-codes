#include <bits/stdc++.h>
using namespace std;

int partition(int nums[], int low, int high){
    int pivot = nums[low];
    int i = low;
    int j = high;

    while(i<j){
        while(nums[i] <= pivot && i<= high-1){
            i++;
        }
        while (nums[j] > pivot && j>= low+1)
        {
            j--;
        }
        if(i < j) swap(nums[i],nums[j]);
    }

    swap(nums[low], nums[j]);

    return j;

}

void quickSort(int nums[], int low, int high){
    if(low < high){
        int p = partition(nums, low, high);
        quickSort(nums,low, p-1);
        quickSort(nums,p+1,high);
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
    quickSort(nums,0,12);
    print(nums,13);
    return 0;
}