class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int a = 0;
        int b = 0;

        for(int i =0;i<n;i++){
            if(nums[i] == 1){
                a++;
                b = max(b, a);
            }
            else{
                a = 0;
            }
            
        }


       return b;
        
    }
};