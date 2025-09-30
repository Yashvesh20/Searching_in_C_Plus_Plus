# Searching_in_C_Plus_Plus
# Aim:To study and implement Sesarching Algorithm
# Software Required:
visual studio
# Theory:
Searching algorithms are essential tools in computer science used to locate specific items within a collection of data. When we search an item in an array, there are two most common algorithms used based on the type of input array.

+ Linear Search : It is used for an unsorted array. It mainly does one by one comparison of the item to be search with array elements. It takes linear or O(n) Time.
  
+ Binary Search : It is used for a sorted array. It mainly compares the array's middle element first and if the middle element is same as input, then it returns. Otherwise it searches in either left half or right half based on comparison result (Whether the mid element is smaller or greater). 

<ins>Linear Search – O(n) Time and O(1) Space</ins>:
It is the simplest searching algorithm that checks each element sequentially until the key is found or the collection is fully traversed. 

<ins>Binary Search – O(log n) Time and O(1) Space</ins>:
It works on sorted arrays by repeatedly dividing the search interval in half. If the target matches the middle element, return it; otherwise, continue searching left or right.

# Implementation:
The codes that demonstrate the two types of searching algorithms are,
+ Linear search
+ Binary Search

# Algorithms:

Algorithm: Binary Search using Class

1. Start
2. Define a class `SearchArr` with:
    A private function `binarysearch(arr, target)` that performs binary search.
     A public function `search(arr, target)` that calls `binarysearch`.
3. Binary Search (`binarysearch`)
   1. Initialize `low = 0` and `high = arr.size() - 1`.
   2. Repeat while `low <= high`:
        Compute `mid = low + (high - low) / 2`.
        If `arr[mid] == target`, return `mid`.
        Else if `arr[mid] < target`, set `low = mid + 1`.
        Else set `high = mid - 1`.
   3. If element not found, return `-1`.
4. In `main()`
   1. Create an object `obj` of class `SearchArr`.
   2. Initialize an array/vector `arr = {220,22,20,34,14,18}`.
   3. Set `target = 9`.
   4. Call `obj.search(arr, target)`.
   5. Print the result (index of the target if found, otherwise `-1`).
5. End

Algorithm: Linear Search

1. Start
2. Declare an integer array `arr[5]`.
3. Prompt the user to *"Enter Array elements"* and read 5 integers into `arr`.
4. Display the entered array elements.
5. Prompt the user to *"Enter the element to be searched"* and read it into variable `key`.
6. For each index `i` from `0` to `4`:
     If `arr[i] == key`, then:

       Print *"Element found at index i"*.
       Exit the program.
7. If the loop ends without finding the element, print *"Element not found"*.
8. End
   
# Conclusion:
Through the above two codes the two searching techniques were explored in C++.
