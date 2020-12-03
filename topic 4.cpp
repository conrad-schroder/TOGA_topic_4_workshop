// topic 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //step 1//
    for (int i = 1; i < 1500; i = i * 2)
    {
        cout << i << endl;
    }
    //step 2//
    for (int b = 0; b < 4; b = b++)
    {
        for (int a = 0; a < 4; a = a++)
        {
            cout << "hello world" << endl;
        }
        // mathmatical relationship between the two for loops: N = (A + 1) + (B x 5) 

    }
    int a = 0;
    int b = 0;
    for (int n = 0; n < 26; n = (a = a + 1) + (b = b * 5))//for loop takes advantaghe of the mathmaticsl experession
    {
        cout << n << endl;
    }
}
