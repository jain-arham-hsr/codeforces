// Problem Statement: https://codeforces.com/problemset/problem/4/A

import java.util.*;

public class problem_4a {

    class Solution {
        void canDivide(int weight) {
            String res = (weight % 2 == 0 & weight != 2) ? "YES" : "NO";
            System.out.println(res);
        }
    }

    public static void main(String[] args) {
        problem_4a problem = new problem_4a();
        Solution sol = problem.new Solution();
        try (Scanner inp = new Scanner(System.in)) {
            sol.canDivide(inp.nextInt());
        }
    }
}