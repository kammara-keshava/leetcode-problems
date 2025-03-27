import java.util.*;
public class bucketsort {
    public static void bucket(ArrayList<Float> array,int n){
         @SuppressWarnings("unchecked")
        //  array.sort
        Vector<Float>[] buckets=new Vector[n];
        for(int i=0;i<n;i++){
            buckets[i]=new Vector<Float>();
        }
        for(int i=0;i<n;i++){
            // float idx = array.get(i) * (n - 1);
            // buckets[Math.round(idx)].add(array.get(i));
            float idx = array.get(i) * (n - 1);
// buckets[Math.round(idx)].add(array.get(i));
int bucketIndex = (int) Math.min(Math.round(idx), n - 1); // Ensure bucketIndex doesn't exceed the last index
buckets[bucketIndex].add(array.get(i));


        }
        for(int i=0;i<n;i++){
            Collections.sort(buckets[i]);
        }
        int index=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<buckets[i].size();j++){
                array.set(index++, buckets[i].get(j));
            }
        }
        System.out.println("sorted array is:");
        for(float i:array){
            System.out.print(i+" ");
        }
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        ArrayList<Float> array=new ArrayList<>(n);
        for(int i=0;i<n;i++){
            float temp=sc.nextFloat();
            array.add(temp);
      }
      bucket(array,n);
      sc.close();
    }
}
