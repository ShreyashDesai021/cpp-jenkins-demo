#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cout << "Usage: calculator <num1> <operator> <num2>" << endl;
        return 1;
    }

    int a = atoi(argv[1]);
    char op = argv[2][0];
    int b = atoi(argv[3]);

    switch (op) {
        case '+': cout << "Result: " << a + b; break;
        case '-': cout << "Result: " << a - b; break;
        case '*': cout << "Result: " << a * b; break;
        case '/': 
            if (b != 0) cout << "Result: " << a / b;
            else cout << "Division by zero error";
            break;
        default:
            cout << "Invalid operator";
    }
    return 0;
}
