class Solution {
public:
    int pivotInteger(int n) {
        vector<int>lsum(n),rsum(n);
        lsum[0]=0;rsum[n-1]=0;
        for(int i=1;i<n;i++){
            lsum[i]=lsum[i-1]+i;
        }
        for(int i=n-2;i>=0;i--){
            rsum[i]=rsum[i+1]+(i+2);
        }
        for(int i=0;i<n;i++){
            if(lsum[i]==rsum[i]){
                return i+1;
            }
        }
        return -1;
    }
};
