class Solution {
public:
   int largestInteger(int num) {
        priority_queue<int> even;
        priority_queue<int> odd;
        vector<int> digit,res;
        int temp=num;
        while(temp!=0){
          int n=temp%10;
          digit.push_back(n);
          if(n%2==0){
            even.push(n);
          }
          else{
            odd.push(n);
          }
          temp/=10;
        }
        reverse(digit.begin(),digit.end());
        for(int d:digit){
          if(d%2==0){
            res.push_back(even.top());
            even.pop();
          }
          else{
            res.push_back(odd.top());
            odd.pop();
          }

        }
        int maxx=0;
        for(int n:res){
          maxx=maxx*10+n;
        }
        return maxx;
    }
};
