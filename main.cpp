#include <iostream>
#include <stdio.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int row;
    char ch;
    char sym;
   
    printf("Введите любую букву:\n");
    scanf_s("%c", &sym);
    char ROWS = sym - '@';

    for (row = 0; row < ROWS; row++)
    {
        char letter = 'A';
        for (char i = 0; i < ROWS - row; i++)
        {
            printf("%c",' ');
        }
        for (ch = 'A'; ch <= 'A' + row; ch++)
        {
            printf("%c", ch);      
        }
        if (row > 0)
        {
            letter += row - 1;
            for (ch = letter; ch > letter - row; ch--)
            {
                printf("%c", ch);
            }
        }    
        printf("\n");      
    }   
    return 0;
}

