int count=0;
for (int i=0;i<n;i++) {
    if (arr[i]==search_key) {
        count++;
    }
}                                        //Time Complexity: O(n)
return count;                           //Space Complexity: O(1)