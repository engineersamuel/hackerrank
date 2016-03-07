import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static int exch(int num, int rate) {
        if (Math.floor(num / rate) < 1) return 0;
        return (int)Math.floor(num / rate) + exch((int)Math.floor(num / rate) + (num % rate), rate);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            int c = in.nextInt();
            int m = in.nextInt();
            
            int total = 0;
            int bought = (int)Math.floor(n / c);
            total += bought;
            total += exch(bought, m);
            System.out.println(total);
        }
    }
}
