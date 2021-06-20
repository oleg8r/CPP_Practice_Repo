/*============================================================
|
| File Name: Sieve_of_Eratosthenes_w_Bitset.cpp
| Purpose: To display all the prime numbers from 2 to 1023 
|   using bitset and to check user's number for prime.
|	(features the check for evenness and implements bitwise/bitset 
|   operations).
| Documentation: This C++ program displays all the prime numbers 
|   from 2 to 1023 using bitset, then it allows the user to enter 
|   a number to determine whether that number is prime. This program 
|   features the check for evenness.
|
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2021-06-18         Oleg Savelev          created
|
|============================================================*/
#include <iostream>

using namespace std;

int main()
{
    const int n = 1024;
    char arrayVar[n/8];
    //arrayVar[1] = arrayVar[0] = 0;

    for (int i = 0; i < n/8; i++)
        arrayVar[i] = 0xff;

    for (int i = 2; i < n; i++)
        if (arrayVar[i / 8] & (0x80 >> i % 8))
        {
            cout << i << " ";
            for (int j = i * i; j < n; j = j + i)
                arrayVar[j / 8] = arrayVar[j / 8] & (~0x80 >> j % 8);
        }

    cout << endl;
    int inputVar;
    cin >> inputVar;

    if (arrayVar[inputVar / 8] & (0x80 >> inputVar % 8))
    {
	    cout << "yes" << endl;
    }
    else cout << "no" << endl;

    return 0;
}


