// Logic: Using BigInteger Class from math.Biginteger 

import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner s = new Scanner(System.in);
        while(s.hasNext()){
            System.out.println(s.nextBigInteger().add(s.nextBigInteger()));
        }
    }
}
