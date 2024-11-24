#include <iostream>
#include <vector>
using namespace std;


void bubbleSort(int nums[], int n){
    for (int i = 0; i < n; i++){
        for (int j =0; j < n-i-1; j++){
            if(nums[j+1] < nums[j]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    
}

void insertionSort (int nums[], int n) {
    for(int i=0; i<n; i++){
        int j = i;
        while(j > 0 && nums[j-1] > nums[j]){
            int temp = nums[j-1];
            nums[j-1] = nums[j];
            nums[j] = temp;
            j--;
        }
    }
}

void insertionSort (vector<float> nums, int n) {
    for(int i=0; i<n; i++){
        int j = i;
        while(j > 0 && nums[j-1] > nums[j]){
            int temp = nums[j-1];
            nums[j-1] = nums[j];
            nums[j] = temp;
            j--;
        }
    }
}


void selectionSort(int nums[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(nums[j] < nums[min]){
                min = j;
            }
        }

        int temp = nums[i];
        nums[i] = nums[min];
        nums[min] = temp;
    }
}

void bucketSort(float nums[], int n){
    vector<float> b[n];

    for(int i=0; i<n; i++){
        int bi = n * nums[i];
        b[bi].push_back(nums[i]);
    }

    for(int i=0; i<n; i++){
        insertionSort(b[i], b[i].size());
    }

    // concatenate all the buckets together
    int index = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j < b[i].size(); j++){
            nums[index++] = b[i][j];
        }
    }
}




void print(int nums[], int n ){
    for( int i=0 ; i<n ; i++ ){
        cout << nums[i] << " " ;
    }
    cout << endl;
}
int main () {

    int n = 10;
    int nums[] = {1,5,3,2,4,-3,22,32,1,2};
    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};

    // print(nums, n);

    cout << "After Sorting " << endl;
    // bubbleSort(nums, n);
    // selectionSort(nums, n);
    // insertionSort(nums, n);
    bucketSort(arr, 6);

    // print(nums, n);


    // printing for the bucket sort float array
    for(int i=0 ; i< 6; i++){
        cout << arr[i]<<" ";
    }


    return 0;
}