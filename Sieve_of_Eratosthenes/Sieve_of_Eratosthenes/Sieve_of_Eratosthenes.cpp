/*============================================================
|
| File Name: Sieve_of_Eratosthenes_w_Bitset.cpp
| Purpose: To display all the prime numbers from 2 to 1000
|   and to check user's number for prime.
|	(features the check for evenness).
| Documentation: This C++ program displays all the prime numbers
|   from 2 to 1023, then it allows the user to enter a number 
|   to determine whether that number is prime. This program
|   features the check for evenness.
|
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2021-06-17         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

using namespace std;

int main()
{
    int n = 1000;
    int arrayVar[1000];
    arrayVar[0] = 0;
    arrayVar[1] = 0;
    //arrayVar[1] = arrayVar[0] = 0;

    for (int i = 2; i < n; i++)
        arrayVar[i] = 1;

    for (int i = 2; i < n; i++)
        if (arrayVar[i] == 1)
            for (int j = i+i; j < n; j=j+i)
                if(j%i==0)
                    arrayVar[j] = 0;

    for (int i = 2; i < n; i++)
        if(arrayVar[i] == 1)
            cout << i << " ";

    return 0;
}


//VERSION 2: without a check for evenness
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    const int n = 1000;
//    int arrayVar[n];
//    arrayVar[0] = 0;
//    arrayVar[1] = 0;
//    //arrayVar[1] = arrayVar[0] = 0;
//
//    for (int i = 2; i <= n; i++)
//        arrayVar[i] = 1;
//
//    for (int i = 2; i * i <= n; i++)
//        if (arrayVar[i] == 1)
//            for (int j = i * i; j <= n; j = j + i)
//                arrayVar[j] = 0;
//
//    for (int i = 2; i <= n; i++)
//        if (arrayVar[i] == 1)
//            cout << i << " ";
//
//    return 0;
//}