int self(int n){
    int num = n;
   while(n){
       if(n%10!=0 && num % (n%10) == 0){
           n=n/10;
       }
       else
       return 0;
   }
   return num;
}
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            int temp = self(i);
            if(temp!=0){
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
