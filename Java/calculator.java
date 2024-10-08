import java.util.*;

public class Calculator {

    public static void showHelp() {
        System.out.println("\nHelp - Operation Guide:");
        System.out.println("1: Addition (+) - Adds two numbers and gives the sum.");
        System.out.println("2: Subtraction (-) - Subtracts the second number from the first.");
        System.out.println("3: Multiplication (*) - Multiplies two numbers.");
        System.out.println("4: Division (/) - Divides the first number by the second (ensure the second number isn't zero).");
        System.out.println("5: Modulus (%) - Finds the remainder when the first number is divided by the second (for integers).");
        System.out.println("Select any operation to perform or 0 to view this help again.\n");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int operation;
        float num1, num2, result = 0;

        System.out.println("Welcome To Calculator in Java\n");

        while (true) {
            System.out.println("Select Your Desired Operation By Typing -");
            System.out.println("0 for Help");
            System.out.println("1 for Addition (+)");
            System.out.println("2 for Subtraction (-)");
            System.out.println("3 for Multiplication (*)");
            System.out.println("4 for Division (/)");
            System.out.println("5 for Modulus (%)");

            operation = scanner.nextInt();

            if (operation == 0) {
                showHelp();
                continue;
            }

            while (operation < 1 || operation > 5) {
                System.out.println("Invalid input. Please enter a valid number from 1 to 5:");
                operation = scanner.nextInt();
            }

            String operationName = "";
            switch (operation) {
                case 1: operationName = "Addition"; break;
                case 2: operationName = "Subtraction"; break;
                case 3: operationName = "Multiplication"; break;
                case 4: operationName = "Division"; break;
                case 5: operationName = "Modulus"; break;
            }

            System.out.println("You Selected " + operationName);
            System.out.println("Now, Enter the first number:");
            num1 = scanner.nextFloat();
            System.out.println("Great, Now enter the second number:");
            num2 = scanner.nextFloat();

            switch (operation) {
                case 1:
                    result = num1 + num2;
                    System.out.println("Result of " + num1 + " + " + num2 + " is = " + result);
                    break;
                case 2:
                    result = num1 - num2;
                    System.out.println("Result of " + num1 + " - " + num2 + " is = " + result);
                    break;
                case 3:
                    result = num1 * num2;
                    System.out.println("Result of " + num1 + " * " + num2 + " is = " + result);
                    break;
                case 4:
                    if (num2 != 0) {
                        result = num1 / num2;
                        System.out.println("Result of " + num1 + " / " + num2 + " is = " + result);
                    } else {
                        System.out.println("Error: Division by zero!");
                    }
                    break;
                case 5:
                    if (num2 != 0) {
                        result = (int)num1 % (int)num2;
                        System.out.println("Result of " + (int)num1 + " % " + (int)num2 + " is = " + (int)result);
                    } else {
                        System.out.println("Error: Modulus by zero!");
                    }
                    break;
            }

            break;
        }

        scanner.close();
    }
}
