/**
  David Poduska
  30 June 2017
**/
import java.util.*;
import java.io.*;
import java.math.*;

class Solution {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int horses[] = new int[N];
        int minDiff = 9999;
        for (int i = 0; i < N; i++) {
            int pi = in.nextInt();
            horses[i] = pi;
        }
        Arrays.sort(horses);
        for(int i = 0; i < horses.length - 1; i++){
            int diff = Math.abs(horses[i + 1] - horses[i]);
            if(diff < minDiff){
                minDiff = diff;
            }
        }
        System.out.println(minDiff);
    }
}
