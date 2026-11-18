class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       vector<int> res;
       int turn=0;
       while(turn<2){ 
            for(auto n:nums){
                res.push_back(n);
            }
            turn++;
        }
        return res;
    }
};