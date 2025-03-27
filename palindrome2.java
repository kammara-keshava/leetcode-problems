public class palindrome2{
    public static void main(String args[]){
        String a="abccba";
        int mid=a.length()/2;
        int c=0;
        for(int i=0;i<mid;i++){
            if(a.charAt(mid-i-1)==a.charAt(mid+i)){
                c++;
            }
            else{
                System.out.println("false");
            }
            
        }
        if(c==mid){
            System.out.println("true");
        }

    }
} 