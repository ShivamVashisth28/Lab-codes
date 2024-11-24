#include <iostream>
using namespace std;


void bubbleSort(int nums[], int n)
{
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


void insertionSort (int nums, int n) {
    return ;
}

void print(int nums[], int n ){
    for( int i=0 ; i<n ; i++ ){
        cout << nums[i] << " " ;
    }
    cout << endl;
}
int main () {

    int n = 5;
    int nums[] = {1,5,3,2,4};

    print(nums, n);

    cout << "After Sorting " << endl;
    bubbleSort(nums, n);

    print(nums, n);


    return 0;
}