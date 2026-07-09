class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> lostmatches;
        unordered_map<int,int> wonmatches;
        set<int> players;
        for(int i = 0; i < matches.size(); i++) {
            int winner = matches[i][0];
            int loser = matches[i][1];
            wonmatches[winner]++;
            lostmatches[loser]++;
            players.insert(winner);
            players.insert(loser);
        }
        vector<vector<int>> ans(2);
        for(int player : players) {
            if(lostmatches[player] == 0) {
                ans[0].push_back(player);
            }
            else if(lostmatches[player] == 1) {
                ans[1].push_back(player);
            }
        }
        return ans;
    }
};
