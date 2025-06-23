// Problem Statement: https://codeforces.com/problemset/problem/71/A

import java.util.*;

public class problem_71a {

    class Solution {
        String abbreviate(String word) {
            int word_length = word.length();
            if (word_length <= 10) {
                return word;
            }
            return "" + word.charAt(0) + (word_length - 2) + word.charAt(word_length - 1);
        }
    }

    public static void main(String[] args) {
        problem_71a problem = new problem_71a();
        Solution sol = problem.new Solution();
        try (Scanner inp = new Scanner(System.in)) {
            int n = inp.nextInt();
            inp.nextLine();
            for (int i = 0; i < n; i++) {
                System.out.println(sol.abbreviate(inp.nextLine()));
            }
        }
    }
}