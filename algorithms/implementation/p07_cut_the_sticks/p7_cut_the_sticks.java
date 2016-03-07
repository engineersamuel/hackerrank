import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        for(int arr_i=0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        
        boolean done = false;
        while (!done) {
            // Count the positive integers and establish the cut size
            int count = 0;
            int cutSize = 10001;
            for (int i = 0; i < n; i++) {
                if (arr[i] > 0) {
                    count += 1;
                    cutSize = Math.min(cutSize, arr[i]);
                }
            }
            
            if (count == 0 || cutSize == 0) {
                break;
            }
            
            System.out.println(count);
            
            for (int i = 0; i < n; i++) {
                arr[i] -= cutSize;
            }
        }
    }
}
