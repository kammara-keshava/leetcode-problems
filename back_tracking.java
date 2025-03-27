public class back_tracking {
    public static void printperm(String str,String perm,int idx){
        if(str.length()==0){
            System.out.println(perm);
            return;
        }
        for(int i=0;i<str.length();i++){
            char curr=str.charAt(i);
        String newstr=str.substring(0,i)+str.substring(i+1);
         printperm(newstr,perm+curr,idx+1);
        }
    }
    public static void main(String[] args){
        String str="abc";
        printperm(str,"",0);
    }
}
