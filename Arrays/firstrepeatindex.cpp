int firstrepeatindex(int arr[], int n) {
    unordered_map<int,int> m;
    int ans=INT_MAX;
    for (int i=0; i<n; i++) {
        if (m.find(arr[i]) == m.end()) {      //not found so add to map
            m[arr[i]] = i;
        }
        else {
            ans=min(ans,m[arr[i]]);      //update ans if found
        }
    }
    if (ans == INT_MAX) {
        return -1;
    }
    return ans;                     
}                           //Time Complexity: O(n)
                            //Space Complexity: O(n)