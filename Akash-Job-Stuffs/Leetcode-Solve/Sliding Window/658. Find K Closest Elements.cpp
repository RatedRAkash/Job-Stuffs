class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        int left = 0, right = k;

        // we keep a FIXED size Window of "k" length
        // here, "left" is the Farthest from "x" integer... So, by moving to the Right, if we find that there is No More "right" index that is Closer to "x" then at that Time that Particular Window is our Answer
        while(right<nums.size()){
            if(abs(nums[left]-x)> abs(nums[right]-x)){
                left++;
                right++;
            }
            else{
                break;
            }
        }

        vector<int> ans;
        for(int i=left; i<right; i++){
            ans.push_back(nums[i]);
        }

        return ans;
    }
};