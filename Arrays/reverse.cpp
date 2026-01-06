void reverse(int arr[], int n) {
    int i=0;
    int j=n-1;
    while(i<j) {
        swap(arr[i], arr[j]);
        i++;                         //Time Complexity: O(n)
        j--;                         //Space Complexity: O(1)
    }
}