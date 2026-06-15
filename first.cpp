#include <iostream>
using namespace std;

void addition(int a, int b)
{
  cout << "Addition is: " << a + b;
}

void subtraction(int a, int b)
{
  cout << "Subtraction is: " << a - b;
}

void multiplication(int a, int b)
{
  cout << "Multiplication is: " << a * b;
}

void division(int a, int b)
{
  if (b != 0)
    cout << "Division is: " << a / b;
  else
    cout << "Cannot divide by zero";
}

void Modulus(int a, int b)
{
  if (b != 0)
    cout << "Modulus is: " << a % b;
  else
    cout << "Cannot perform modulus by zero";
}

int main()
{
  int n;

  do
  {
    cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n0. Exit\n";
    cout << "Enter your choice: ";
    cin >> n;

    if (n >= 1 && n <= 5)
    {
      int a, b;

      cout << "Enter first number: ";
      cin >> a;

      cout << "Enter second number: ";
      cin >> b;

      switch (n)
      {
      case 1:
        addition(a, b);
        break;
      case 2:
        subtraction(a, b);
        break;
      case 3:
        multiplication(a, b);
        break;
      case 4:
        division(a, b);
        break;
      case 5:
        Modulus(a, b);
        break;
      }
    }
  } while (n != 0);

  cout << "\nProgram Ended!";
  return 0;
}