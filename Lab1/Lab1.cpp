#include "Lab1.h"

int AssembInserts::Add(int a, int b)
{
    int c = 0;
    _asm
    {
        mov eax, a
        add eax, b
        mov c, eax
    }
    return c;
}
int AssembInserts::Subtract(int a, int b)
{
    int c = 0;
    _asm
    {
        mov eax, a
        Sub eax, b
        mov c, eax
    }
    return c;
}
int AssembInserts::Multiply(int a, int b)
{
    int c;
    _asm
    {
        mov eax, a
        mul b
        mov c, eax
    }
    return c;
}
int AssembInserts::Divide(int a, int b)
{
    int c;
    _asm
    {
        mov eax, a
        mov edx, 0
        mov ebx, b
        idiv ebx
        mov c, eax
    }
    return c;
}

int AssembInserts::More(int a, int b)
{
    int c;
    _asm
    {
        mov eax, a
        mov ebx, b
        mov edx, 1
        cmp eax, ebx
        ja above
        mov edx, 0
        above:
        mov c, edx
    }
    return c;
}
int AssembInserts::MoreOrEqual(int a, int b)
{
    int c;
    _asm
    {
        mov eax, a
        mov ebx, b
        mov edx, 1
        cmp eax, ebx
        jae abeq
        mov edx, 0
        abeq:
        mov c, edx
    }
    return c;
}
int AssembInserts::Less(int a, int b)
{
    int c;
    _asm
    {
        mov eax, a
        mov ebx, b
        mov edx, 1
        cmp eax, ebx
        jb below
        mov edx, 0
        below:
        mov c, edx
    }
    return c;
}
int AssembInserts::LessOrEqual(int a, int b)
{
    int c;
    _asm
    {
        mov eax, a
        mov ebx, b
        mov edx, 1
        cmp eax, ebx
        jbe beeq
        mov edx, 0
        beeq:
        mov c, edx
    }
    return c;
}
int AssembInserts::Equal(int a, int b)
{
    int c;
    _asm
    {
        mov eax, a
        mov ebx, b
        mov edx, 1
        cmp eax, ebx
        je equ
        mov edx, 0
        equ:
        mov c, edx
    }
    return c;
}
int AssembInserts::NotEqual(int a, int b)
{
    int c;
    _asm
    {
        mov eax, a
        mov ebx, b
        mov edx, 1
        cmp eax, ebx
        jne nequ
        mov edx, 0
        nequ:
        mov c, edx
    }
    return c;
}

int AssembInserts::Not(int a)
{
    int c;
    _asm
    {
        mov eax, a
        not eax
        mov c, eax
    }
    return c;
}
int AssembInserts::And(int a, int b)
{
    int c;
    _asm
    {
        mov eax, a
        mov ebx, b
        and eax, ebx
        mov c, eax
    }
    return c;
}
int AssembInserts::Or(int a, int b)
{
    int c;
    _asm
    {
        mov eax, a
        mov ebx, b
        or eax, ebx
        mov c, eax
    }
    return c;
}
int AssembInserts::Xor(int a, int b)
{
    int c;
    _asm
    {
        mov eax, a
        mov ebx, b
        xor eax, ebx
        mov c, eax
    }
    return c;
}

int AssembInserts::ArrayByIndex(int* a, int b)
{
    int c;
    _asm
    {
        mov eax, a
        mov ebx, b
        mov ebx, [eax + 4 * ebx]
        mov c, ebx
    }
    return c;
}

int AssembInserts::BiteShiftRight(int a, int b)
{
    int c;
    _asm
    {
        mov eax, a
        mov ecx, b
        shr eax, cl
        mov c, eax
    }
    return c;
}
int AssembInserts::BiteShiftLeft(unsigned char a, unsigned char b)
{
    unsigned char c;

    _asm
    {
        mov al, a
        mov cl, b
        shl al, cl
        mov c, al
    }
    return c;
}

int AssembInserts::BiteCicleShiftRight(unsigned char a, unsigned char b)
{
    unsigned char c;

    _asm
    {
        mov al, a
        mov cl, b
        ror al, cl
        mov c, al
    }
    return c;
}
int AssembInserts::BiteCicleShiftLeft(unsigned char a, unsigned char b)
{
    unsigned char c;

    _asm
    {
        mov al, a
        mov cl, b
        rol al, cl
        mov c, al
    }
    return c;
}