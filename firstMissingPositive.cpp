class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       long long int n = 1;
    unordered_set<int>st;
    for(int i = 0 ; i<nums.size();i++){
        st.insert(nums[i]);
    }
    while(st.find(n)!=st.end()){
        n++;
    }
    return n ;
    }
};
