/**
 * GoodBye 2023 Contest
 * B-Two Divisors
 * Jan 2nd 2024
 * @author : Mostafa Asaad
*/
package Contests.Good_Bye_2023;

import java.util.Scanner;

public class B_Two_Divisors {

    static long GCD(long a, long b) /* Greatest common divisor using euclidean algorithm*/
    {
        if (a == 0)
            return b;

        if (b == 0)
            return a;

        if (a == b)
            return a;

        if (a > b)
            return GCD(a - b, b);

        return GCD(a, b - a);
    }

    public static void main(String [] args)
    {
        long a, b, test_cases;
        Scanner scanner = new Scanner(System.in);
        test_cases = scanner.nextLong();

        while (test_cases-- != 0) {
            a = scanner.nextLong();
            b = scanner.nextLong();

            if (b % a == 0)
                System.out.println((b * b / a));
            else
                System.out.println((a * b) / GCD(a, b));
        }
        scanner.close();
    }
    
}