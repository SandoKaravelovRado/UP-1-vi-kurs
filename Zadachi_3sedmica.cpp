#include<iostream>
#include <stdbool.h>
#include <math.h>
#include <string>

using namespace std;

int main(){
    //редицата ai = a^i +3i.
    int number, ai = 0;
    
    cin>>number;

    for(int index = 1; index <= number; index++){
        ai = pow(index,2) + 3*index;

        cout<<ai<<endl;
    }


    //Най-голямо отрицателно число.
    int numbers, currentNumber, biggestNegativeNumber;

    cin >> numbers >> currentNumber;
    biggestNegativeNumber = currentNumber;

    for(int index = 0; index < numbers-1; index++){
        cin >> currentNumber;
        if((biggestNegativeNumber >= 0 && currentNumber < 0) || 
        (biggestNegativeNumber < 0 && currentNumber > biggestNegativeNumber && currentNumber < 0)){
            biggestNegativeNumber = currentNumber;
        }
    }

    cout<<biggestNegativeNumber;


    // Фибоначи редиа.
    int n, firstNumber = 0, secondNumber = 1, nextNumber = 0;

    cin>>n;

    for(int index = 1; index <= n; index++){
        if(index == 1) {
            cout << firstNumber << ", ";
            continue;
        }
        else if(index == 2) {
            cout << secondNumber << ", ";
            continue;
        }
        nextNumber = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = nextNumber;
        
        cout << nextNumber << ", ";
    }

    // Събиране на всички числа до въвеждане на 0.
    int summary = 0, currentNumber;

    do{
        cin >> currentNumber;
        summary+=currentNumber;
    }while( currentNumber );

    cout<<summary;

    // Сбор на цифрите на дадено число
    int summary = 0, number;

    cin >> number;

    while(number){
        summary += (number % 10);
        number /= 10;
    }

    cout << summary;

    
    // число N на сепен M.
    int number, powerBy, answer;

    cin >> number >> powerBy;

    answer = number;

    if(powerBy==0){
        answer = 1;
    }else if(powerBy==1){
        answer = number;
    }else{
        for(int index = 1; index < powerBy; index++){
            answer *= number;
        }
    }
    cout << answer;

    // Дали дадено число е просто
    
    int number;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number == 0 || number == 1) {
        isPrime = false;
    }else {
        for (int index = 2; index <= number / 2; ++index) {
            if (number % index == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime){
        cout << "YES";
    }else{cout << "NO";}

    // Всички главни букви без гласните

    for(int index = 65; index <= 90 ; index++){
        if(index != 65 && index != 69 && index != 73 && index != 79 && index != 85){
            cout << char(index) << endl;
        }
    }

    // Квадрат NxN, главен диагонал 0, над него + и под него -
    int n;

    printf("Enter an integer:\n");
    cin >> n;
    for(int indexRow = 0; indexRow < n; indexRow++){
        for(int indexColumn = 0; indexColumn < n; indexColumn++){
            if(indexColumn == indexRow){
                cout << '0';
            }else if(indexColumn < indexRow){
                cout << '-';
            }else {
                cout << '+';
            }
        }
        cout << endl;
    }
    return 0;
}
