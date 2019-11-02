#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int userArray();
void populateArray(int);

int main(){

    srand(time(0));
    userArray();

    return 0;
}

int userArray(){

    int SIZE;
    int* myArray = 0;
    do{
        cout << "What array size? " << endl;
        cin >> SIZE;
        if (SIZE < 5)
            cout << "Invalid arrays size. Size must >= 5." << endl;
        else if (SIZE > 15)
            cout << "Invalid arrays size. Size must <= 15" << endl;
    } while ((SIZE < 5) || (SIZE > 15));

    myArray = new int[SIZE];
    for(int i = 0; i < SIZE; i++){
        cout << (rand() % 200)+10 << " ";
    }
    return *myArray;
}

void displayReverse(int* myArray){

    int SIZE;

}
