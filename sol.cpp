class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {

        int n = nums.size();

        if(n%k != 0) return false;

          int groups = n/k;

        unordered_map<int,int> cnt;
        for(auto & num:nums){
            cnt[num]++;
        }

        for(auto &p:cnt){

            if(p.second>groups)return false;
           
        }
        return true; 
    }
};