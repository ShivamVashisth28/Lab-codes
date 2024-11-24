# Lab-codes

## Sorting file contains 
 1. Bubble Sort 
    - i: 0 to n, j: 0 to n-i-1
 2. Insertion Sort
    - i: 0 to n
    - j=i-1 and key = arr[i] , 
    - arr[j+1] = arr[j] and arr[j] > key
 3. Selection Sort 
    - i: 0 to n-1, j: i+1 to n, 
    - minIndex and swap minIndex with i
 4. Bucket Sort 
    - first form buckets
    - sort those buckets
    - combine orderly

## Merge Sort 
1. mergeSort 
    - mergeSort(nums,low, mid)
    - mergeSort(nums, mid+1, high)
    - merge(nums, low, mid, high)
2. merge
    - temp array
    - left : low and right : high
    - store in temp merging left and right
    - for i:low to high
    - nums[i] = temp[i-low];

## Quick Sort 
1. quickSort
    - p = parition(nums, low, high);
    - quicksort(nums, low, p-1)
    - quicksort(nums, p+1, high)
2. partition
    - pivotEle = arr[low]
    - i = low, j = right
    - while(i < j){
    - if(i <= high-1 && num[i] <= pivotEle ) i++
    -        if(j >= low+1 && num[j] > pivotEle ) j--
    -        if(i < j) swap(num[i], num[j]);
    -    }
    - swap(arr[j] , arr[low])
    - return j
    
## Heap Sort 
1. heapify
    - nums, n, i
    - largest = i
    - l= 2*i+1, r=2*i+2, 
    - check for largest in l and r
    - if largest != i then swap largest and i , heapify agian (nums, n, largest)

2. heapsort
    - for i :n/2-1 to i>=0, heapify with i
    - for i :n-1 to i>0, swap(i,0) and heapify(nums,i,0);


## Linear and Binary Search
1. Linear Search 
    - simple traversal of the array
2. Binary Search
    - divide the space by two
    - h = m -1
    - l = m +1


## Huffman Coding 
1. used to compress the data