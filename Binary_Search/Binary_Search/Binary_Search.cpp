// Binary_Search.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>

int main()
{
    std::vector<int> cont;

    //initializing random seed
    srand(time(NULL));
    int num = rand() % 10 + 1; //genrates random number from 1 - 10
    for (int i{ 0 }; i < 10; i++) {
        cont.push_back(i);
    }

    //Applying the normal search
    int start = clock();
    for (int j{ 0 }; j < cont.size(); j++) {
        if (cont.at(j) == num) {
            std::cout << "THE GUESSED NUMBER IS: " << num << std::endl;
            int end = clock();
            std::cout<<"TIME ELASPED: "<<end-start<<" ticks"<<std::endl;
        }
    }

    //The Binary search Algrothm being implemented
    int low = 0;
    int high = cont.size() - 1;
    int mid{};
    while (low <= high) {
        mid = (low + high) / 2;
        if (num == cont.at(mid)) {
            std::cout << "Trial: " << cont.at(mid) << std::endl;
            std::cout << "Number found: " << num << std::endl;
            return 0;
        }
        //The guessed number is greater than the number proposed...
        if ( cont.at(mid)>num) {
            std::cout << "Trial: " << cont.at(mid) << std::endl;
            high = mid - 1;
        }
        else {
            std::cout << "Trial: " << cont.at(mid) << std::endl;
            low = mid + 1;
        }
    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
