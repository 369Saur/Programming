int add(int num){
    int sum=0;
    while(num){
       sum=sum+num%10;
       num=num/10;
    }
    return sum;
}
class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mp;
        int sum=0;
        int maxi=INT_MIN;
        for(int i=lowLimit;i<=highLimit;i++){
           sum = add(i);
           mp[sum]++;
        }
        for(auto i:mp){
            maxi = max(maxi,i.second);
        }
        return maxi;
    }
};
