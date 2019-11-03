#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void displayReverse(int arr[], int pos);
void vertical(int arr[], int pos);
void reverseElement(int arr[], int pos);
bool prime(int arr[], int pos);

int main(){

    srand(time(0));
    int SIZE;
    cout << "Enter SIZE -> ";
    cin >> SIZE;
    int myArray[SIZE];
    for (int i = 0; i < SIZE; i++){
        myArray[i] = (rand() % 200)+10;
        cout << myArray[i] << " ";
    }
    cout << endl;

    displayReverse(myArray, SIZE);
    cout << endl;
    vertical(myArray, 1);
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
