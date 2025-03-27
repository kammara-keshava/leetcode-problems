// public class bitmanuplication {
    
//     public static void main(String[] args){
        
//      int n = 5; //0101
//      int pos = 2;
//      int bitMask = 1<<pos;
//      int newBitMask = ~(bitMask);
//      int newNumber = newBitMask & n;
//      System.out.println(newNumber);

//     }
// }




//Set Bit
// import java.util.;


public class  bitmanuplication{
   public static void main(String args[]) {
      int n = 5; //0101
      int pos = 1;
      int bitMask = 1<<pos;


      int newNumber = bitMask | n;
      System.out.println(newNumber);
   }
}
