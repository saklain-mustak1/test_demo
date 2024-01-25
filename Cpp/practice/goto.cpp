#include <iostream>

using namespace std;

int main() {
  int a, b, result;
  int choice;

  start:

  cout << "Enter the first number: ";
  cin >> a;

  cout << "Enter the second number: ";
  cin >> b;

  cout << "Enter your choice: " << endl;
  cout << "1 for addition" << endl;
  cout << "2 for subtraction" << endl;
  cout << "3 for multiplication" << endl;
  cout << "4 for division" << endl;
  cin >> choice;

  switch (choice) {
    case 1:
      goto add;
      break;

    case 2:
      goto sub;
      break;

    case 3:
     goto mul;
      break;

    case 4:
      goto div;
      break;

    default:
      cout << "Invalid choice!" << endl;
//      goto breakme;
		return 0;
      break;
  }
  
{
//	breakme:
//		return 0;
  
	add:
		result = a + b;
		cout << "The sum of the numbers is: " << result << endl;
		goto start;
		
	sub:
		 result = a - b;
	      cout << "The difference of the numbers is: " << result << endl;
	      goto start;
	      
	mul:
	  	 result = a * b;
	      cout << "The product of the numbers is: " << result << endl;
	      goto start;
	      
	div:
//		float dresult;
		if (b == 0) {
	        cout << "Division by zero is not possible!" << endl;
	      } else {
	      	float result = (float)a / b;
	        cout << "The division of the numbers is: " << result << endl;
	      }
	      goto start;
      
  }
	

  return 0;
}