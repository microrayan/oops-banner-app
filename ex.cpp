/*#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    std::string name;
    int roll_no;
    void display()
    {
        std::cout << "Name " << name << std::endl;
        cout << "Roll_no " << roll_no << endl;
    }
};
int main()
{
    Student s1;
    s1.name = "Saral";
    s1.roll_no = 101;
    s1.display();
    return 0;
}*/
// #include <iostream>
// #include <string>
// #include <iomanip>
// using namespace std;
// class BankAccount
// {
// public:
//     string account_holder_name;
//     double balance=0;
//     void deposit(double amount)
//     {
//         balance += amount;
//     }
//     void withdraw(double amount)
//     {
//         if (amount <= balance)
//         {
//             balance -= amount;
//         }
//         else
//         {
//             cout << "Insufficient funds!" << endl;
//         }
//     }
//     void display()
//     {
//         cout << "_____Bank Details_____" << endl;
//         cout << "Holder: " << account_holder_name << endl;
//         cout << fixed << setprecision(2);
//         cout << "balance: $" << balance << endl;
//     }
// };
// int main()
// {
//     BankAccount s1;
//     double depAmt, withAmt;
//     cout << "Enter account holder name: ";
//     getline(cin, s1.account_holder_name);
//     cout << "Enter Initial balance ";
//     cin >> s1.balance;
//     cout << "Enter amount to deposit: ";
//     cin >> depAmt;
//     s1.deposit(depAmt);
//     cout << "Enter amount to withdraw: ";
//     cin >> withAmt;
//     s1.withdraw(withAmt);
//     s1.display();
//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;
class Book
{
public:
    string book_title, author_name;
    double price;
    void display()
    {
        cout << "----Book Details----" << endl;
        cout << "Book title: " << book_title << endl;
        cout << "Author name: " << author_name << endl;
        cout << "Book price: " << price << endl;
    }
};
int main()
{
    Book b1;
    cout << "Book title: " << endl;
    getline(cin, b1.book_title);
    cout << "Author name: " << endl;
    getline(cin, b1.author_name);
    cout << "price: " << endl;
    cin >> b1.price;
    b1.display();
    return 0;
}
