
#include <iostream>

using namespace std;

//char board[3][3] = {
//    {'1', '2', '3'},
//    {'4', '5', '6'},
//    {'7', '8', '9'}
//};
//
//
//
////-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//
//
//
//void printBoard();
//bool checkWin(char player);
//bool checkDraw();
//void playerMove(char player);
//
//
//
////-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//
//
// 
//int main() 
//{ 
//	
//
//    char currentPlayer = 'X';
//    bool gameOver = false;
//
//    while (!gameOver) 
//    {
//        printBoard();
//        playerMove(currentPlayer);
//
//        if (checkWin(currentPlayer)) 
//        {
//            printBoard();
//            cout << "Player " << currentPlayer << " wins!" << endl;
//            gameOver = true;
//        }
//        else if (checkDraw()) 
//        {
//            printBoard();
//            cout << "It's a draw!" << endl;
//            gameOver = true;
//        }
//
//        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
//    }
//
//    return 0;
//}
//
//
//
////-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//
//
//    
//void printBoard()
//{
//    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
//    cout << "-----------" << endl;
//    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
//    cout << "-----------" << endl;
//    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
//}
//
//
//
////-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//
//
//
//bool checkWin(char player) 
//{
//
//    for (int i = 0; i < 3; i++) 
//    {
//        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true;
//    }
//    
//    for (int i = 0; i < 3; i++) 
//    {
//        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return true;
//    }
//
//    
//    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return true;
//    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return true;
//
//    return false;
//}
//
//
//
////-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//
//
//
//bool checkDraw() 
//{
//    for (int i = 0; i < 3; i++) 
//    {
//        for (int j = 0; j < 3; j++) 
//        {
//            if (board[i][j] != 'X' && board[i][j] != 'O') return false;
//        }
//    }
//    return true;
//}
//
//
//
//
////-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//
//
//
//void playerMove(char player) 
//{
//    int choice;
//    cout << "Player " << player << ", enter your move (1-9): ";
//    cin >> choice;
//
//    int row = (choice - 1) / 3;
//    int col = (choice - 1) % 3;
//
//    if (choice < 1 || choice > 9 || board[row][col] == 'X' || board[row][col] == 'O') 
//    {
//        cout << "Invalid move. Try again." << endl;
//        playerMove(player);
//    }
//    else 
//    {
//        board[row][col] = player;
//    }
//}
//




//1
//int factorial(int num) 
// {
//
//
//	if (num == 1)
//		return 1;
//
//	return num * factorial(num - 1);
//
//
//}




//2
//int factorialsum(int num) 
// {
//
//
//	if (num == 0)
//		return 0;
//
//	return num + factorialsum(num - 1);
//
//
//}



//3
//void massivYazdir(int massiv[], int uzunluq, int eded)
//{
//	if (eded >= uzunluq) 
//	{
//		return;
//	}
//
//	cout << massiv[eded] << ' ';
//	massivYazdir(massiv, uzunluq, eded + 1);
//}



//4
//int massivCem(int massiv[], int uzunluq, int ind)
//{
//	if (ind >= uzunluq)
//	{
//		return 0;
//	}
//
//
//	return massiv[ind] + massivCem(massiv, uzunluq, ind + 1);
//}


//5
//int üstTap(int a, int b) 
//{
//	if (b == 0) 
//	{
//		return 1;
//	}
//	else 
//	{
//		return a * üstTap(a, b - 1);

//int main()
//{
	//1
	//int number = 0;
	//cout << "faktorialini tapmaq isitediyiniz ededi yazin - " << endl;
	//cin >> number;


	//cout << "ededin faktoriali - " << factorial(number) << endl;







	//2
	//int number = 0;
	//cout << "0-dan verilən rəqəmə kimi ədədlərin cəmini toplamaq isdediyiniz ededi yazin - " << endl;
	//cin >> number;


	//cout << "ededin faktoriali - " << factorialsum(number) << endl;








	//3
	//const int max = 5;
	//int massiv[max] = { 1, 2, 3, 4, 5 };

	//cout << "Massivin elementləri: ";
	//massivYazdir(massiv, max, 0);

	//cout << endl;

	//return 0;








	//4
	//const int max = 5;
	//int massiv[max] = { 1, 2, 3, 4, 5 };

	//int cəm = massivCem(massiv, max, 0);

	//cout << "Massivin elementlərinin cəmi: " << cəm << endl;

	//return 0;








	//5
	//int a, b;
	//cout << "Əsas ədəd (a): ";
	//cin >> a;
	//cout << "Üst ədəd (b): ";
	//cin >> b;

	//if (b < 0) 
	//{
	//	cout << "Üst ədəd mənfi ola bilməz." << endl;
	//}
	//else 
	//{
	//	int nəticə = üstTap(a, b);
	//	cout << a << "^" << b << " = " << nəticə << endl;
	//}

	//return 0;



//}





//------------------------------------------------------------------------------------------




//1

//void max(int* num1, int* num2, int* max);
//
//int main() 
//{
//	int num1, num2, maximum;
//
//
//	cout << "birinci eded - ";
//	cin >> num1;
//	cout << "ikinci eded - ";
//	cin >> num2;
//
//
//	max(&num1, &num2, &maximum);
//
//
//	cout << "boyuk eded - " << maximum << endl;
//
//	return 0;
//}
//
//
//void max(int* num1, int* num2, int* max) 
//{
//	
//	if (*num1 > *num2) 
//	{
//		*max = *num1;
//	}
//	else 
//	{
//		*max = *num2;
//	}
//}



//--------------------------------------------------------------------------------





//2

//void findsign(int* num);
//
//int main() 
//{
//	int number;
//	
//
//
//	cout << "bir ədəd daxil edin: ";
//	cin >> number;
//
//
//	findsign(&number);
//
//
//	
//
//	return 0;
//}
//
//
//void findsign(int* num) 
//{
//	if (*num > 0) 
//	{
//		cout << "true" << endl;
//	}
//	else if (*num < 0) 
//	{
//
//		cout << "false" << endl;
//	}
//	else {
//		cout << "true" << endl;
//	}
//}
//
//
//
////---------------------------------------------------------------------------------------------
//
//
//
////3-
//
//
////---------------------------------------------------------------------------------------------------
//
//
////4
//
//
//
//void add(int* num1, int* num2, int* result);
//void subtract(int* num1, int* num2, int* result);
//void multiply(int* num1, int* num2, int* result);
//void divide(int* num1, int* num2, float* result);
//
//int main()
//{
//	int num1, num2;
//	int resultInt;
//	float resultFloat;
//	char operation;
//
//
//	cout << "birinci eded - ";
//	cin >> num1;
//	cout << "ikinci eded - ";
//	cin >> num2;
//	cout << "emeliyyati secin (+, -, *, /) - ";
//	cin >> operation;
//
//
//	switch (operation)
//	{
//	case '+':
//		add(&num1, &num2, &resultInt);
//		cout << "netice - " << resultInt << endl;
//		break;
//	case '-':
//		subtract(&num1, &num2, &resultInt);
//		cout << "netice - " << resultInt << endl;
//		break;
//	case '*':
//		multiply(&num1, &num2, &resultInt);
//		cout << "netice - " << resultInt << endl;
//		break;
//	case '/':
//
//		divide(&num1, &num2, &resultFloat);
//		cout << "netice - " << resultFloat << endl;
//		break;
//	default:
//		cout << "yanlis secim!" << endl;
//	}
//
//	return 0;
//}
//
//
//void add(int* num1, int* num2, int* result)
//{
//	*result = *num1 + *num2;
//}
//
//
//void subtract(int* num1, int* num2, int* result)
//{
//	*result = *num1 - *num2;
//}
//
//
//void multiply(int* num1, int* num2, int* result)
//{
//	*result = *num1 * *num2;
//}
//
//
//void divide(int* num1, int* num2, float* result)
//{
//	if (*num2 != 0)
//	{
//		*result = (float)(*num1) / *num2;
//	}
//	else
//	{
//		cout << "Sıfıra bölmə xətası!" << endl;
//	}
//}
//



