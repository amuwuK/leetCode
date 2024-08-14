class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> y;
        int b = 0, s = candies.size();
        for ( int i = 0; i < s; i++ ){
            if ( candies[i] > b )
                b = candies[i];
        }
        for ( int i = 0; i < s; i++ ){
            if ( candies[i] + extraCandies >= b )
                y.push_back(true);
            else
                y.push_back(false);
        }
        return y;
    }
};