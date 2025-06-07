import java.util.*;

public class Sum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter two numbers");

        System.out.print("First Number: ");
        int a = sc.nextInt();
        System.out.print("Second Number: ");
        int b = sc.nextInt();

        System.out.println("Sum: " + (a + b));

        sc.close();

    }
}
