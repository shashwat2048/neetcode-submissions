class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>arr;
        for(auto x:matrix){
            arr.insert(arr.end(), x.begin(), x.end());
        }
        int l=0, n=arr.size(), r=n-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(arr[mid]==target){
                return true;
            }else if(arr[mid] > target){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return false;
    }
};
