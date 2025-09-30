Yashvesh Singh 24070123138
#include<iostream>
#include<vector>
#include<algorithm> 

class SearchArr {
    int binarysearch(const std::vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1; 
    }

public:
    int search(std::vector<int> arr, int target) {
        std::sort(arr.begin(), arr.end()); 
        return binarysearch(arr, target);
    }
};

int main() {
    SearchArr obj;
    std::vector<int> arr = {220, 20, 22, 34, 14, 18};
    int target = 20;

    int result = obj.search(arr, target);

    if (result != -1) {
        std::cout << "Target found at sorted index: " << result << std::endl;
    } else {
        std::cout << "Target not found." << std::endl;
    }

    return 0;
}
Output:
Target found at sorted index: 2
