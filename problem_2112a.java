// Problem Statement: https://codeforces.com/problemset/problem/2112/A

import java.util.*;

public class problem_2112a {

    class Solution {
        String canBobWin(int a, int x, int y) {
            if (a > x && a < y || a > y && a < x) {
                return "NO";
            }
            return "YES";
        }
    }

    public static void main(String[] args) {
        problem_2112a problem = new problem_2112a();
        Solution sol = problem.new Solution();
        try (Scanner inp = new Scanner(System.in)) {
            int n = inp.nextInt();
            inp.nextLine();
            for (int i = 0; i < n; i++) {
                System.out.println(sol.canBobWin(inp.nextInt(), inp.nextInt(), inp.nextInt()));
                inp.nextLine();
            }
        }
    }
}