//Given a sorted array of integers, find the starting and ending position of a given target value.
//Your algorithm's runtime complexity must be in the order of O(log n).
//If the target is not found in the array, return [-1, -1].
//For example,
//    Given [5, 7, 7, 8, 8, 10] and target value 8,
//    return [3, 4].


vector<int> searchRange(int A[], int n, int target) {
    int left = 0;
    int right = n-1;

    vector<int> result(2, -1);

    while(left<=right){
        int mid = (left+right)/2;
        if(A[mid]<target){
            left = mid+1;
            continue;
        }
        else if(A[mid]>target){
            right = mid-1;
            continue;
        }
        else{
            for(int i = mid; A[i] == target && i>=left; i--){
                result[0] = i;
            }
            for(int i = mid; A[i] == target && i<= right; i++){
                result[1] = i;
            }
            break;
        }


    }

    return result;
}
