class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> vp(position.size());
        for(int i=0; i<position.size(); i++){
            vp[i] = {position[i], speed[i]};
        }
        sort(vp.begin(), vp.end());
        stack<float> time;
        for(int i=0; i<vp.size(); i++){
            float t = (target-vp[i].first)/(float)vp[i].second;
            while(!time.empty() && time.top()<=t){
                time.pop();        
            }
            time.push(t);
        }
        return time.size();
    }
};