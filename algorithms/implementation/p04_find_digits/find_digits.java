import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static List<Integer> getArr(int num) {
        List<Integer> arr = new ArrayList<Integer>();
        while (num != 0) {
            arr.add(num % 10);
            num /= 10;
        }
        Collections.reverse(arr);
        return arr;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            List<Integer> arr = Solution.getArr(n);
            int numDiv = 0;
            for (int i = 0; i < arr.size(); i++) {
                if ((arr.get(i) != 0) && (n % arr.get(i) == 0)) {
                    numDiv += 1;
                }
            }
            System.out.println(numDiv);
        }
    }
}
