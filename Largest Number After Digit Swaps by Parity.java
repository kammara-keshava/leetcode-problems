class Solution {
    public int largestInteger(int num) {
        PriorityQueue<Integer> even = new PriorityQueue<>(Collections.reverseOrder());
        PriorityQueue<Integer> odd = new PriorityQueue<>(Collections.reverseOrder());
        List<Integer> digit = new ArrayList<>();
        List<Integer> res = new ArrayList<>();
        int temp=num;
        while(temp!=0){
          int n=temp%10;
          digit.add(n);
          if(n%2==0){
            even.add(n);
          }
          else{
            odd.add(n);
          }
          temp/=10;
        }
        Collections.reverse(digit);
        for(int d:digit){
          if(d%2==0){
            res.add(even.poll());         
          }
          else{
            res.add(odd.poll());            
          }

        }
        int maxx=0;
        for(int n:res){
          maxx=maxx*10+n;
        }
        return maxx;
    }
}
