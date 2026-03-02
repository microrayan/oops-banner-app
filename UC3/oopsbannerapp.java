package UC3;

import java.util.Scanner;
import java.text.DecimalFormat;

public class oopsbannerapp {
    static class BankAccount {
        String accountHolderName;
        double balance = 0.0;

        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                System.out.println("Successfully deposited $" + amount);
            }
        }

        void withdraw(double amount) {
            if (amount > balance) {
                System.out.println("Insufficient funds! Current balance: $" + balance);
            } else if (amount > 0) {
                balance -= amount;
                System.out.println("Successfully withdrew $" + amount);
            }
        }

        void display() {
            DecimalFormat df = new DecimalFormat("0.00");
            System.out.println("\n--- Account Details ---");
            System.out.println("Holder: " + accountHolderName);
            System.out.println("Current Balance: $" + df.format(balance));
            System.out.println("-----------------------");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        BankAccount s1 = new BankAccount();
        double depAmt, withAmt;

        System.out.print("Enter account holder name: ");
        s1.accountHolderName = scanner.nextLine();

        System.out.print("Enter Initial balance: ");
        s1.balance = scanner.nextDouble();

        System.out.print("Enter amount to deposit: ");
        depAmt = scanner.nextDouble();
        s1.deposit(depAmt);

        System.out.print("Enter amount to withdraw: ");
        withAmt = scanner.nextDouble();
        s1.withdraw(withAmt);

        s1.display();
        scanner.close();
    }
}
