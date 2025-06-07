// Compile -> javac file_name.java
// Run -> java file_name

// Execution Steps
// utkarshpratapsingh@Utkarshs-MacBook-Air Basics % javac -d Output First.java
// utkarshpratapsingh@Utkarshs-MacBook-Air Basics % java -cp Output First  

import java.util.*;

public class First {
    public static void main(String[] args) {
        System.out.println("Hello, world!");

        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();

        System.out.println("Age: " + age);

        sc.close();
    }
}