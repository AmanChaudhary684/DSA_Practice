int maxval=arr[0],minval=arr[0];
for (int i=0;i<n;i++) {
    if (arr[i]>maxval) {
        maxval=arr[i];
    }
    if (arr[i]<minval) {             //Time Complexity: O(n)
        minval=arr[i];               //Space Complexity: O(1)
    }
}
return {maxval,minval};