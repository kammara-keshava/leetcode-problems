class Solution {
public:
    vector<vector<int>> generate(int numrows) {
        vector<vector<int>> arr;
        if(numrows==0){
            return arr;
        }
        arr.push_back({1});
        for(int i=1;i<numrows;i++){
            vector<int> r(i+1,1);
            for(int j=1;j<i;j++){
                r[j]=arr[i-1][j-1]+arr[i-1][j];
            }
            arr.push_back(r);
        }
        return arr;
    }
};
