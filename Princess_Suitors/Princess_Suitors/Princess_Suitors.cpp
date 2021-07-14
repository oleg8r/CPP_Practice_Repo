/*============================================================
|
| File Name: Princess_Suitors.cpp
| Purpose: To determine which position you should stand in 
|   to be selected if there are n suitors.
| Documentation: This programs determines which position 
|   you should stand in to be selected if there are n suitors 
|   and every third suitor gets eliminated during each iteration.
|   The program uses erase function from Vector Class 
|   to eliminate an element.
|
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2021-06-30         Oleg Savelev          created
|
|============================================================*/

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int vectSize;
    std::cout << "Enter a number of suitors: \n";
    cin >> vectSize;
    vector<int> vectObj(vectSize);  //Using Constructor with Parameter to specify the vector size

    for (int i = 0; i < vectSize; i++)
        vectObj[i] = i + 1;

    int indexV = -1;
    while(vectObj.size() > 1)
    {
        indexV = (indexV + 3) % vectObj.size();
        vectObj.erase(vectObj.begin() + indexV);
        --indexV;
    }
    
    cout << vectObj.front() << endl;

    return 0;
}
