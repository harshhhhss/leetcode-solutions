// Problem: Check if Array Is Sorted and Rotated
// Difficulty: Easy
// Topic: Arrays

class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                x++;
            } if (x>1){
                return false;
            }
        }
        return true;
    }
};

//x here is a break point of the array. If there are more than 1 break points, then the array is not sorted and rotated. If there is only 1 break point, then the array is sorted and rotated. If there are no break points, then the array is sorted but not rotated.
