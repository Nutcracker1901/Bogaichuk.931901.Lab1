#include <iostream>
#include "Lab1.h"

using namespace std;

int main()
{
    AssembInserts check;
    cout << "Add(77,33) = " << check.Add(77, 33) << endl;                        
    cout << "Subtract(51,14) = " << check.Subtract(51, 14) << endl;
    cout << "Multiply(-3,15) = " << check.Multiply(-3, 15) << endl;
    cout << "Divide(72,6) = " << check.Divide(506, 5) << endl;

    cout << endl << "More(3,5) = " << check.More(3, 5) << endl;
    cout << "Less(17,50) = " << check.Less(17, 50) << endl;
    cout << "MoreOrEqual(21,4) = " << check.MoreOrEqual(21, 4) << endl;
    cout << "MoreOrEqual(21,21) = " << check.MoreOrEqual(21, 21) << endl;
    cout << "LessOrEqual(4,4) = " << check.LessOrEqual(4, 4) << endl;
    cout << "LessOrEqual(4,21) = " << check.LessOrEqual(4, 21) << endl;
    cout << "Equal(1,1) = " << check.Equal(1, 1) << endl;
    cout << "NotEqual(1,2) = " << check.NotEqual(1, 2) << endl;

    cout << endl << "Not(3) = " << check.Not(3) << endl;
    cout << "And(2,3) = " << check.And(2, 3) << endl;                     
    cout << "Or(4,3) = " << check.Or(4, 3) << endl;                       
    cout << "Xor(4,3): " << check.Xor(4, 3) << endl;  
    cout << "Xor(2,3): " << check.Xor(2, 3) << endl << endl;

    int mas[5];
    for (int i = 0; i < 5; i++) 
    {
        mas[i] = rand() % 101;
        cout << mas[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << check.ArrayByIndex(mas, i) << endl;
    }


    cout << endl << "BiteShiftRight(16,3) = " << check.BiteShiftRight(16, 3) << endl;  
    cout << "BiteShiftLeft(2,2) = " << check.BiteShiftLeft(2, 2) << endl;    
    cout << "BiteCicleShiftRight(2,2) = " << check.BiteCicleShiftRight(2, 2) << endl;
    cout << "BiteCicleShiftLeft(128,2) = " << check.BiteCicleShiftLeft(128, 2) << endl;
}