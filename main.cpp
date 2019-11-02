#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void displayReverse(int arr[], int pos);


int main(){

    srand(time(0));
    int SIZE;
    cout << "Enter SIZE -> ";
    cin >> SIZE;
    int myArray[SIZE];
    for (int i = 0; i < SIZE; i++){
        myArray[i] =(rand() % 200)+10;
        cout << myArray[i] << " ";
    }
    cout << endl;
    
    displayReverse(myArray, SIZE);

    cout << endl << endl;

    int number;
    cout << "enter number to split ->";
    cin >> number;
    int digitArray[3];
    int i = 0;
    while ( number > 0 ){
        int digit = number % 10;
        number /= 10;
        cout << digit << endl;
        digitArray[i] = digit;
        i++;
    }
    i--;
    cout << "=====================" << endl;
    while (i >= 0){
        cout << digitArray[i] << endl;
        i--;
    }
    
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
