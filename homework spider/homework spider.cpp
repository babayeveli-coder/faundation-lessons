
#include <ctime>
#include <iostream>
using namespace std;


//---------------------------------------------------------------------------------------------------------------------


//1


//int countSpecificNumbers(int* numbers, int count) 
//{
//    int specificCount = 0;
//    for (int i = 0; i < count; ++i) 
//    {
//        if (numbers[i] % 3 == 0 && numbers[i] % 5 != 0) 
//        {
//            specificCount++;
//        }
//    }
//    return specificCount;
//}
//
//int main() 
//{
//    srand(time(0)); 
//    const int count = 10;
//    int randomNumbers[count];
//
//    
//    for (int i = 0; i < count; ++i) 
//    {
//        randomNumbers[i] = rand() % 100 + 1; 
//    }
//
//    
//    cout << "Generated random numbers: ";
//    for (int i = 0; i < count; ++i) {
//        cout << randomNumbers[i] << " ";
//    }
//    cout << endl;
//
//    int specificCount = countSpecificNumbers(randomNumbers, count);
//    cout << "Count of numbers that are divisible by 3 but not by 5: " << specificCount << endl;
//
//    return 0;
//}




//----------------------------------------------------------------------------------------------------------



//2




//int main() {
//    srand(time(0)); 
//    const int count = 10;
//    int numbers[count];
//
//    
//    for (int i = 0; i < count; ++i) 
//    {
//        numbers[i] = rand() % 41 - 10; 
//    }
//
//    
//    cout << "Generated random numbers: ";
//    for (int i = 0; i < count; ++i) 
//    {
//        cout << numbers[i] << " ";
//    }
//    cout << endl;
//
//   
//    bool foundNegative = false;
//    int sum = 0;
//
//    for (int i = 0; i < count; ++i) 
//    {
//        if (foundNegative) 
//        {
//            sum += numbers[i]; 
//        }
//        if (numbers[i] < 0 && !foundNegative) 
//        {
//            foundNegative = true; 
//        }
//    }
//
//    
//    if (foundNegative) 
//    {
//        cout << "Sum of numbers after the first negative number: " << sum << endl;
//    }
//    else 
//    {
//        cout << "No negative number found." << endl;
//    }
//
//    return 0;
//}



//----------------------------------------------------------------------------------------------------------------



//3



//void findMinMax(int* numbers, int count, int& min, int& max) 
//{
//    min = numbers[0]; 
//    max = numbers[0]; 
//
//    for (int i = 1; i < count; ++i) 
//    {
//        if (numbers[i] < min) 
//        {
//            min = numbers[i]; 
//        }
//        if (numbers[i] > max) 
//        {
//            max = numbers[i]; 
//        }
//    }
//}
//
//int main() 
//{
//    srand(time(0)); 
//    const int count = 20;
//    int numbers[count];
//
//    
//    for (int i = 0; i < count; ++i) 
//    {
//        numbers[i] = rand() % 100 + 1;
//    }
//
//    
//    cout << "Generated random numbers: ";
//    for (int i = 0; i < count; ++i) 
//    {
//        cout << numbers[i] << " ";
//    }
//    cout << endl;
//
//    int min, max;
//    findMinMax(numbers, count, min, max);
//
//    
//    cout << "Minimum value: " << min << endl;
//    cout << "Maximum value: " << max << endl;
//
//    return 0;
//}


//----------------------------------------------------------------------------------------------------------



//4




//void findMinMax(int* numbers, int count, int& min, int& max) 
//{
//    min = numbers[0]; 
//    max = numbers[0]; 
//
//    for (int i = 1; i < count; ++i) 
//    {
//        if (numbers[i] < min) 
//        {
//            min = numbers[i]; 
//        }
//        if (numbers[i] > max) 
//        {
//            max = numbers[i]; 
//        }
//    }
//}
//
//int main() {
//    srand(time(0));
//    const int count = 20;
//    int numbers[count];
//
//   
//    for (int i = 0; i < count; ++i) 
//    {
//        numbers[i] = rand() % 100 + 1; 
//    }
//
//    
//    cout << "Generated random numbers: ";
//    for (int i = 0; i < count; ++i) 
//    {
//        cout << numbers[i] << " ";
//    }
//    cout << endl;
//
//    int min, max;
//    findMinMax(numbers, count, min, max); 
//
//    
//    cout << "Minimum value: " << min << endl;
//    cout << "Maximum value: " << max << endl;
//
//    return 0;
//}


//-----------------------------------------------------------------------------------------------------------------------------

//5



//int main() {
//    srand(time(0)); 
//    const int count = 20;
//    int numbers[count];
//
//    
//    for (int i = 0; i < count; ++i) {
//        numbers[i] = rand() % 200 + 1; 
//    }
//
//    cout << "Generated random numbers: ";
//    for (int i = 0; i < count; ++i) {
//        cout << numbers[i] << " ";
//    }
//    cout << endl;
//
//    int oneDigitCount = 0;
//    int twoDigitCount = 0;
//    int threeDigitCount = 0;
//
//
//    for (int i = 0; i < count; ++i) {
//        if (numbers[i] < 10) {
//            oneDigitCount++;
//        }
//        else if (numbers[i] < 100) {
//            twoDigitCount++;
//        }
//        else {
//            threeDigitCount++;
//        }
//    }
//
//
//    double oneDigitPercentage = (oneDigitCount * 100.0) / count;
//    double twoDigitPercentage = (twoDigitCount * 100.0) / count;
//    double threeDigitPercentage = (threeDigitCount * 100.0) / count;
//
//
//    cout << "1-digit numbers: " << oneDigitCount << " (" << oneDigitPercentage << "%)" << endl;
//    cout << "2-digit numbers: " << twoDigitCount << " (" << twoDigitPercentage << "%)" << endl;
//    cout << "3-digit numbers: " << threeDigitCount << " (" << threeDigitPercentage << "%)" << endl;
//
//    return 0;
//}
