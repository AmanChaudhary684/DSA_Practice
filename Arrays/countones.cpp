int countones(int arr[], int n) {      //non-increasing order
    int left=0;
    int right=n-1;                          //{1,1,1,0,0,0}
    while(left<=right) {
        int mid=(left+right)/2;
        if (arr[mid]==1) {
            left=mid+1;
        }
        else {
            right=mid-1;
        }
    }
    return left;
}                           //Time Complexity: O(logn)
                            //Space Complexity: O(1)