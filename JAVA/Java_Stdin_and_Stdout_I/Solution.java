package Java_Stdin_and_Stdout_I;

import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        scan.close();

        System.out.printf("%d\n%d\n%d",a,b,c);
    }
}
