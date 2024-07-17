#include <iostream>
#include <string>
using namespace std;

int main(){
	cout << "What is your first name? ";
	string FirstName;
	getline(cin,FirstName);
	cout << "What is your last name? ";
	string LastName;
	getline(cin, LastName);
	cout << "What letter grade do you deserve? ";
	char LetterGrade;
	string LetterGradeStringFormat;
	getline(cin, LetterGradeStringFormat);
	LetterGrade = LetterGradeStringFormat[0];
	LetterGrade += 1;
	cout << "What is your age? ";
	string Age;
	getline(cin, Age);
	cout << "Name: " << LastName << ", " << FirstName << endl;
	cout << "Grade: " << LetterGrade << endl;
	cout << "Age: " << Age;
	return 0;
}
//почему-то если использовать getline(cin,name) вместе с просто cin то он не видит cin.
