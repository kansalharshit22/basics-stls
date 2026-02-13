//560. Subarray Sum Equals K
//using map important->follow up 525 continguous array
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //count of subarray where sum equal to k
        int cnt=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int curr=0;
        for(int i=0; i<nums.size(); i++){
            curr+=nums[i];
            if(mp.count(curr-k)){
                cnt+=mp[curr-k];
            }
            mp[curr]++;
        }
        return cnt;
    }
};
