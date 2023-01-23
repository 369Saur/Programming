class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;

        int i=n,j=i-1,k=j-1;
        int ans=0,sum=0;

        while(k>=0){
            sum=nums[i]+nums[j]+nums[k];
            
            //heron's formula
            double s = sum/2.0;
            double area = sqrt(s*(s-nums[i])*(s-nums[j])*(s-nums[k]));

            if(area>0){
               ans=max(ans,sum);
            }
            i--;j--;k--;
        }

        return ans;
    }
};
