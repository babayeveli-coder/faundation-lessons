

#include <iostream>
using namespace std;
int main()
{
	//1

	int number;
	cout << "Ədəd daxil edin: ";
	cin >> number;
	if (number % 2 == 0) {
		cout << "Cüt ədəd" << endl;
	}
	else {
		cout << "Tək ədəd" << endl;
	}
	return 0;

	//2

	int num1, num2;
	cout << "Birinci ədəd daxil edin: ";
	cin >> num1;
	cout << "İkinci ədəd daxil edin: ";
	cin >> num2;
	int smaller = (num1 < num2) ? num1 : num2;
	cout << "Kiçik ədəd " << smaller << "dir." << endl;
	return 0;

	//3

	float number;
	cout << "Ədəd daxil edin: ";
	cin >> number;
	if (number > 0) {
		cout << "Müsbət ədəd" << endl;
	}
	else if (number < 0) {
		cout << "Mənfi ədəd" << endl;
	}
	else {
		cout << "0" << endl;
	}
	return 0;

	//4


	float a, b;
	cout << "Birinci kəsr ədədini daxil edin: ";
	cin >> a;
	cout << "İkinci kəsr ədədini daxil edin: ";
	cin >> b;

	cout << "Seçimlər:" << endl;
	cout << "1) a + b" << endl;
	cout << "2) a - b" << endl;
	cout << "3) a * b" << endl;
	cout << "4) a / b" << endl;

	int choice;
	cout << "Seçiminizi edin (1-4): ";
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "Nəticə: " << a + b << endl;
		break;
	case 2:
		cout << "Nəticə: " << a - b << endl;
		break;
	case 3:
		cout << "Nəticə: " << a * b << endl;
		break;
	case 4:
		if (b != 0) {
			cout << "Nəticə: " << a / b << endl;
		}
		else {
			cout << "Sıfıra bölmə!" << endl;
		}
		break;
	default:
		cout << "Yanlış seçim!" << endl;
		break;
	}
	return 0;

	//5

	int number;
	cout << "Ədəd daxil edin: ";
	cin >> number;
	if (number >= 1 && number <= 50) {
		cout << "Ədəd 1-50 aralığındadır." << endl;
	}
	else {
		cout << "Ədəd 1-50 aralığında deyil." << endl;
	}
	return 0;

	//6

	int X, Y;
	cout << "X ədədini daxil edin: ";
	cin >> X;
	cout << "Y ədədini daxil edin: ";
	cin >> Y;

	if (Y != 0 && X % Y == 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;

	//7

	char symbol;
	cout << "Simvol daxil edin: ";
	cin >> symbol;

	if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z')) {
		cout << "HƏRF" << endl;
	}
	else if (symbol == '.' || symbol == ',' || symbol == '!' || symbol == '?') {
		cout << "PUNKT" << endl;
	}
	else {
		cout << "Digər simvol" << endl;
	}
	return 0;

	//8

	int number;
	cout << "Ədəd daxil edin: ";
	cin >> number;

	cout << (number % 3 == 0 ? "3-ə bölünür" : "3-ə bölünmür") << endl;
	cout << (number % 5 == 0 ? "5-ə bölünür" : "5-ə bölünmür") << endl;
	cout << (number % 7 == 0 ? "7-ə bölünür" : "7-ə bölünmür") << endl;

	return 0;

	//9

	int number;
	cout << "Ədəd daxil edin: ";
	cin >> number;

	int modulus;
	if (number < 0) {
		modulus = -number; 
	}
	else {
		modulus = number; 
	}

	cout << "Ədədin modulu: " << modulus << endl;
	return 0;


	//10

	int number;
	cout << "Maksimum 4 rəqəmli ədəd daxil edin: ";
	cin >> number;

	int count = 0;
	while (number > 0) {
		number /= 10;
		count++;
	}
	cout << "Ədəd " << count << " rəqəmdən ibarətdir." << endl;
	return 0;

	//11

	int number;
	cout << "5 rəqəmli ədəd daxil edin: ";
	cin >> number;

	int reversed = 0, original = number;

	while (number > 0) {
		int digit = number % 10;
		reversed = reversed * 10 + digit;
		number /= 10;
	}

	if (original == reversed) {
		cout << "Polindromdur." << endl;
	}
	else {
		cout << "Polindrom deyil." << endl;
	}
	return 0;

	//12

	const string correctPassword = "secret"; 
	string inputPassword;

	cout << "Şifrə daxil edin: ";
	cin >> inputPassword;

	if (inputPassword == correctPassword) {
		cout << "--Access successfully completed--" << endl;
	}
	else {
		cout << "--Access denied--" << endl;
	}
	return 0;


	//13

	int humanYears;
	cout << "İnsan ili daxil edin: ";
	cin >> humanYears;

	if (humanYears < 0) {
		cout << "Mənfi ədəd daxil etdiniz." << endl;
	}
	else {
		float dogYears;
		if (humanYears <= 2) {
			dogYears = humanYears * 10.5;
		}
		else {
			dogYears = 10.5 + (humanYears - 2) * 4;
		}
		cout << "İnsan ili " << dogYears << " it ilinə bərabərdir." << endl;
	}
	return 0;

}


