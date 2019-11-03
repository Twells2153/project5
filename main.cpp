#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void displayReverse(int arr[], int pos);
void displayPower(int num, int power);
void displaySquares(int num, int i);
void vertical(int arr[], int pos);
void increasing(int num, int i, int comp);
void reverseElement(int arr[], int pos);
bool prime(int arr[], int pos);

int main(){

    srand(time(0));
    int SIZE;
    cout << "Enter SIZE -> ";
    cin >> SIZE;
    int myArray[SIZE];
    for (int i = 0; i < SIZE; i++){
        myArray[i] = rand() % 191 + 10;
        cout << myArray[i] << " ";
    }
    cout << endl;

    displayReverse(myArray, SIZE);
    cout << endl;
    cout << endl << endl << myArray[SIZE-1] << " raised to the power of 2 is: " << endl;
    displayPower(myArray[SIZE-1], 2);
    cout << endl << "N" << "\t" << "N Squared" << endl;
    displaySquares(myArray[0], 1);
    vertical(myArray, 1);
    cout << endl;
    increasing(myArray[2], 0, 0);
    cout << endl;
    reverseElement(myArray, 3);
    cout << endl;
    prime(myArray, 4);

    return 0;
}

void displayReverse(int arr[], int pos){

    if (pos != 0){
        cout << arr[pos-1] << " ";
        pos--;
        displayReverse(arr, pos);
    }else{
        return;
    }
}

void displayPower(int num, int power){
    if (power != 1){
        num = num * num;
        power--;
        displayPower(num, power);
    }else{
        cout << num << endl;
        return;
    }
    
}

void displaySquares(int num, int i){
    int index = i;
    int square = index * index;
    if (index != num+1){
        cout << index << "\t" << square << endl;
        index++;
        displaySquares(num, index);
    }else{
        return;
    }
}

void vertical(int arr[], int pos){

    while( pos != 1){
        pos++;
        vertical(arr, pos);
    }
    int number = arr[pos];
    int digitArray[3];
    int i = 0;
    while ( number > 0 ){
        int digit = number % 10;
        number /= 10;
        digitArray[i] = digit;
        i++;
    }

    i--;

    cout << endl << arr[pos] << " vertically" << endl << endl;
    while (i >= 0){
        cout << digitArray[i] << endl;
        i--;
    }
}

void increasing(int num, int i, int comp){
    bool incr = false;
    
    int digitArray[3];

    if (i == 0){
        digitArray[0] = 0;
        digitArray[1] = 0;
        digitArray[2] = 0;
        while(num > 0){
            digitArray[i] = ((num%10));
            num /= 10;
            i++;
        }
        i = 2;
    }
    //while(digitArray[i] != NULL){
        if (digitArray[i] >= comp){
            comp = digitArray[i];
            i--;
            incr = true;
            increasing(0, i, comp);
        }else{
            incr = false;
        }
    //}
    return;
}


void reverseElement(int arr[], int pos){
    while( pos != 3){
        pos++;
        vertical(arr, pos);
    }
    int number = arr[pos];
    int digitArray[3];
    int i = 0;
    cout << number << " reversed is ";
    while ( number > 0 ){
        int digit = number % 10;
        number /= 10;
        digitArray[i] = digit;
        cout << digit;
        i++;
    }
}

bool prime(int arr[], int pos){

    bool isPrime = true;
    while( pos != 4){
        pos++;
        prime(arr, pos);
    }
    for (int i = 2; i <= ((arr[pos]) / 2); i++){
        if(arr[pos] % i == 0){
            isPrime = false;
        }
    }
    if (isPrime == true)
        cout << arr[pos] << " is Prime :";
    else if (isPrime == false)
        cout << arr[pos] << " is not Prime :";

    return isPrime;
}
