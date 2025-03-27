public class ocurenceofletter {
    public static int k=-1;
    public static int e=-1;
    public static void findoccurence(String str,int i,char ele){
        if(i==str.length()){
            System.out.println(k);
            System.out.println(e);
        return;
        }
        char s=str.charAt(i);
        if(s==ele){
            if(k==-1){
                k=i;
            }
            else{
                e=i;
            }

        }
        findoccurence(str,i+1,ele);
    }
    public static void main(String args[]){
      String str="abaacdaefaah";
      char ele='a';
      findoccurence(str,0,ele);
    }
}
