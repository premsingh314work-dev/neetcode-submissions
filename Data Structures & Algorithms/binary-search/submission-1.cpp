class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end= nums.size()-1;
        while(end>=start){
            int mid = start+(end-start)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(target < nums[mid]){
                end=mid-1;
                continue;
            }
            else{
                start=mid+1;
                continue;
            }
        }
        return -1;
    }
};
