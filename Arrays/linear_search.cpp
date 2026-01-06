int i=0;
while(i<n) {
    if (arr[i]==search_key) {
        return i;
    }
    i++;
}
return -1;                           //Time Complexity: O(n)
                                    //Space Complexity: O(1)