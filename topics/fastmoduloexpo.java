import java.util.*;
import java.io.*;
// time complexity - O(logn); space complexity=O(1)
public class fastmoduloexpo {
    public static void main(String[] args) {
        Scanner scn  = new Scanner(System.in);
        long a = scn.nextLong();
        long b = scn.nextLong();
        long m = scn.nextLong();

        long res  = 1;

        while(b>0){
            if((b & 1)==1){
                res=(res*a)%m;
            }
            a=a*a;
            b=b>>1;

        }
        System.out.println(res);
    }
    
}