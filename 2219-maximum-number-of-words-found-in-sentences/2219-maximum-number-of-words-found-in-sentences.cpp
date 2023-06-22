class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=INT_MIN,curr=0;
        for(int i=0;i<sentences.size();i++)
        {
            curr=count(sentences[i].begin(), sentences[i].end(), ' ');
            if(max<curr)max=curr;
        }
        return max+1;
    }
};