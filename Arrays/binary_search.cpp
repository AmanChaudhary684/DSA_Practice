int left=0;
int right=n-1;
while(left<=right) {
    int mid=(left+right)/2;
    if (arr[mid]==search_key) {
        return mid;
    }
    else if (arr[mid]<search_key) {
        left=mid+1;
    }
    else {
        right=mid-1;
    }
}
return -1;                           //Time Complexity: O(logn)
                                    //Space Complexity: O(1)