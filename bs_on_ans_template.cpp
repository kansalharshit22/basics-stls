//875 koko eating bananas
class Solution {
public:
    typedef long long ll;
    bool check(ll mid,vector<int>& piles, int h){
        ll cnt=0;
        for(int i=0; i<piles.size(); i++){
            cnt+=(piles[i]+mid-1)/mid;
        }
        return cnt<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        ll low=1, high=1e9,ans=0;
        while(low<high){
            ll mid=low+(high-low)/2;
            if(check(mid,piles,h)){
                ans=mid;
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};
