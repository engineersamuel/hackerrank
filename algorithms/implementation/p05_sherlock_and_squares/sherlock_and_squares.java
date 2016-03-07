import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int begin = in.nextInt();
            int end = in.nextInt();
            int beginCeil = (int)Math.ceil(Math.sqrt(begin));
            int endFloor = (int)Math.floor(Math.sqrt(end));
            System.out.println(endFloor - beginCeil + 1);
        }
    }
}
