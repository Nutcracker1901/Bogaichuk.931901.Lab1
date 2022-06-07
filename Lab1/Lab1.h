#pragma once
#ifndef LAB1_H  
#define  LAB1_H

class AssembInserts
{
public:
    int Add(int a, int b);
    int Subtract(int a, int b);
    int Multiply(int a, int b);
    int Divide(int a, int b);
    int More(int a, int b);
    int MoreOrEqual(int a, int b);
    int Less(int a, int b);
    int LessOrEqual(int a, int b);
    int Equal(int a, int b);
    int NotEqual(int a, int b);
    int Not(int a);
    int And(int a, int b);
    int Or(int a, int b);
    int Xor(int a, int b);
    int ArrayByIndex(int* a, int b);
    int BiteShiftRight(int a, int b);
    int BiteShiftLeft(unsigned char a, unsigned char b);
    int BiteCicleShiftRight(unsigned char a, unsigned char b);
    int BiteCicleShiftLeft(unsigned char a, unsigned char b);
};
#endif
