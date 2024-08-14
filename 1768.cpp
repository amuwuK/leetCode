class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge;
        int s1 = word1.size(), s2 = word2.size();
        for ( int i = 0; i < s1; i++ ){
            merge += word1[i];
            if ( i < s2 )
                merge += word2[i];
        }
        if ( s2 > s1 )
            merge += word2.substr(s1, s2 - s1);
        return merge;
    }
};