// JAC444_Assignment1_Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int vect1_size;

    cout << "Please specify the 1st vector size: " << endl;
    cin >> vect1_size;

    vector<int> vect1(vect1_size);

    cout << "Please specify numbers for the 1st vector: " << endl;
    for (int i = 0; i < vect1_size; i++)
        cin >> vect1[i];


    int vect2_size;

    cout << "Please specify the 2nd vector size: " << endl;
    cin >> vect2_size;

    vector<int> vect2(vect2_size);

    cout << "Please specify numbers for the 2nd vector: " << endl;
    for (int i = 0; i < vect2_size; i++)
        cin >> vect2[i];


    vector<int> vect_common_nums;

    for (int i = 0; i < vect1_size; i++)
        for (int j = 0; j < vect2_size; j++)
            if (vect1[i] == vect2[j])
                vect_common_nums.push_back(vect1[i]);

    int temp = 0;
    for (int i = 0; i < vect_common_nums.size()-1; i++)
        for (int j = 0; j < vect_common_nums.size()-1-i; j++)
            //j++ doesn't work outside of the loop, because it increases the j value
            if (vect_common_nums[j+1] < vect_common_nums[j])
            {
                temp = vect_common_nums[j+1];
                vect_common_nums[j+1] = vect_common_nums[j];
                vect_common_nums[j] = temp;
            };

    for (int i = 0; i < vect_common_nums.size(); i++)
        cout << vect_common_nums[i] << endl;
}

