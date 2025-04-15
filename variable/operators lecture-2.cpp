// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int b=10;
    //Arithmetic operator-> + - */
    //a+b;
    //a-b;
    //a*b;
    // cout<<a++<<endl;
    // cout<<++a<<endl;
    // cout<<a++ + ++a<<endl;
    // cout<<ans;
    //.........................................
    //Assignment operator = += -= /= %=
    // a += b;
    // cout<<a<<endl;
    //..........................................
    //Relational operators == != >= <=
    // bool ans=a>b;
    // cout<<ans;
    // logical operator && || !
    //  con1      con2      &&  ||
    //   T        T         T   T
    //   T        F         F   T
    //   F        T         F   T
    //   F        F         F   F
    // bool ans =(a>1)&& (b<20);
    // cout<<ans<<endl;
    // bool ans =(a>10)|| (b<20);
    // cout<<ans<<endl;

// }
//Design a C++ program to create a simple calculator that performs basic arithmetic operations: 
//addition, subtraction, multiplication, division, and modulus. The program should take two numbers and an 
//operator as input from the user and display the result based on the selected operation
#include<iostream>
using namespace std;
int main(){ 
double num1, num2;
    char op;

    cout << "Enter number: ";
    cin >> num1 >> op >> num2;

    if (op == '+') cout << num1 + num2;
    else if (op == '-') cout << num1 - num2;
    else if (op == '*') cout << num1 * num2;
    else if (op == '/' && num2 != 0) cout << num1 / num2;
    else if (op == '%' && (int)num2 != 0) cout << (int)num1 % (int)num2;
    else cout << "Invalid input or division by zero!";

    return 0;
    }