//1552->min magnetic force bw balls
//maximise the min possible force

class Solution {
public:
    bool ispossible(int force,vector<int>& pos, int m){
        int cnt=1;
        int prev=pos[0];//place 1st ball at pos[0]
        for(int i=1; i<pos.size(); i++){
            if(pos[i]-prev>=force){
                prev=pos[i];
                cnt++;
            }
            if(cnt==m)return true;
        }
        return false;
    }
    int maxDistance(vector<int>& pos, int m) {
        //binary search on soln
        sort(pos.begin(),pos.end());
        
        int minf=1,maxf=pos[pos.size()-1]-pos[0];
        //minf bw tow balls and maxf
        int ans=0;
        while(minf<=maxf){
            int mid=minf+(maxf-minf)/2;
            if(ispossible(mid,pos,m)){
                //atleast mid force bw any 2 balls
                ans=mid;
                minf=mid+1;
            }else{
                maxf=mid-1;
            }
        }
        return ans;
    }
};
