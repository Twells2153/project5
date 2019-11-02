#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// EDIT Made Connor

int main(){

    srand(time(0));
    int SIZE;
    cout << "Enter SIZE -> ";
    cin >> SIZE;
    int myArray[SIZE];
    for (int i = 0; i < SIZE; i++){
        cout << (rand() % 200)+10 << " ";
    }


    return 0;
}
