int largestpairsum(int arr[], int n) {
    int largest=INT_MIN;
    int secondlargest=INT_MIN;
    for (int i=0;i<n;i++) {
        if (arr[i]>largest) {
            secondlargest=largest;
            largest=arr[i];
        }
        else if (arr[i]>secondlargest) {
            secondlargest=arr[i];
        }
    }
    return largest+secondlargest;
}                           //Time Complexity: O(n)
                            //Space Complexity: O(1)