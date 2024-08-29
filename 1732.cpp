class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int accumulate = 0, largest = 0, i;
        for ( i = 0; i < gain.size(); i++ ){
            accumulate += gain[i];
            if ( largest < accumulate )
                largest = accumulate;
        }
        return largest;
        
    }
};