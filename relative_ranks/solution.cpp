class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>sortedscore;
        vector<int>position;
        for(int i=0;i<score.size();i++){
            sortedscore.push_back(score[i]);
        }
        sort(sortedscore.begin(),sortedscore.end());
        reverse(sortedscore.begin(),sortedscore.end());
        for(int i=0;i<score.size();i++){
            auto it=find(sortedscore.begin(),sortedscore.end(),score[i]);
            int index=it-sortedscore.begin();
            position.push_back(index+1);
        }  
        vector<string>ans;
        for(int i=0;i<score.size();i++){
            if(position[i]==1){
                ans.push_back("Gold Medal");
            }
            else if(position[i]==2){
                ans.push_back("Silver Medal");
            }
            else if(position[i]==3){
                ans.push_back("Bronze Medal");
            }
            else{
                ans.push_back(to_string(position[i]));
            }
        }
        return ans;
    }
};