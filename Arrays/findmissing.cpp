int findmissing(int arr[], int n) {
    int expectedsum=n*(n+1)/2;            //sum formula logic
    int actualsum=0;
    for (int i=0;i<n;i++) {
        actualsum+=arr[i];
    }
    cout << expectedsum-actualsum;
    return;
}                           //Time Complexity: O(n)
                            //Space Complexity: O(1)