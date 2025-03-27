public class duplicates {
    public static boolean[] map=new boolean[26];
    public static void duplicate(String str,int i,String newstr){
        if(i==str.length()){
           System.out.println(newstr);
           System.out.println(i);
           return;
           
        }

        char s=str.charAt(i);
        if(map[s-'a']==true){
         duplicate(str,i+1,newstr);
        }
        else{
            newstr+=s;
            map[s-'a']=true;
            duplicate(str,i+1,newstr);
        }
    }
    public static void main(String args[]){
        String str="ababccda";
        duplicate(str,0,"");
    }
}
