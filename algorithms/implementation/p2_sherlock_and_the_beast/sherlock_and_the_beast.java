import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            int r = n;
            while (r % 3 != 0) {
                r = r - 5;
            }
            if (r < 0) {
                System.out.println("-1");
            } else {
                StringBuilder sb = new StringBuilder();
                for (int i = 0; i < r; i++) {
                    sb.append("5");
                }
                for (int i = 0; i < (n - r); i++) {
                    sb.append("3");
                } 
                System.out.println(sb.toString());
            }
        }
    }
}

