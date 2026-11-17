class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int size1=word1.size();
        int size2=word2.size();
        int n = max(size1,size2);
        string news;
        for (int i =0;i<n;i++){
            if(i>size1-1){
            news+=word2[i];
            continue;
            }
            if(i>size2-1){
            news+=word1[i];
            continue;
            }
            news+=word1[i];
            news+=word2[i];
        }
        return news;
    }
};