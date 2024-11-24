#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int >& nums, int n, int i){
    int largest  = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if(l < n && nums[l] > nums[largest]){
        largest = l;
    }

    if(r < n && nums[r] > nums[largest]){
        largest = r;
    }

    if(largest != i){
        swap(nums[i], nums[largest]);
        heapify(nums, n, largest);
    }
}

void print(vector<int> nums){
    int n = nums.size();
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

void heapSort(vector<int>& nums){
    int n = nums.size();

    for(int i= n/2 -1; i>=0 ; i--){
        heapify(nums,n,i);
    }

    for(int i=n-1; i>0; i--){
        swap(nums[0], nums[i]);
        heapify(nums,i,0);
    }
}



int main () {

    vector<int > nums = {6,5,3,7,1,3,10,1,3,-1};

    print(nums);
    heapSort(nums);
    print(nums);

    return 0;
}