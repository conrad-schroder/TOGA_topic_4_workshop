// topic 4 part 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define HEIGHT 10
#define WIDTH 10
using namespace std;
int main()
{
    int array1[WIDTH][HEIGHT];

    for (int b = 0; b < HEIGHT; b++)
    {
        for (int c = 0; c < WIDTH; c++) {
            array1[b][c] = ((b * WIDTH) + (c + 1));
        }
    }

    for (int i = 0; i < HEIGHT; i++) 
    {
        for (int a = 0; a < WIDTH; a++) 
        {
            cout << array1[i][a] << "  ";
        }
        cout << endl;
    }

}


