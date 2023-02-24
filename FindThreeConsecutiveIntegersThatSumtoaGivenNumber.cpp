class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>temp;
        if(num%3==0){
            temp.push_back(num/3-1);
            temp.push_back(num/3);
            temp.push_back(num/3+1);
        }
        return temp;
    }
};
