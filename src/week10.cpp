/**
* @file week10.cpp
* @brief  Week 10, C++ Review and Warmup from CSI230
*
* @author Grant Mahoney
* @assignment Lecture 10.1
* @date 11/8/2020
* @credits
* 
*/

#include <iostream>
#include "util.h"
//#include "util.cpp"

using namespace std;

int main()
{
    vector <string> coolVector;
    coolVector.push_back("Apple");
    coolVector.push_back("Banana");
    coolVector.push_back("Coconut");
    coolVector.push_back("Durian");
    coolVector.push_back("Eggplant");

    cout << randomElement(coolVector) << endl;

    vector <double> anotherVector;
    anotherVector.push_back(2.0);
    anotherVector.push_back(5.3);
    anotherVector.push_back(7.1);
    anotherVector.push_back(9.6);
    anotherVector.push_back(3.4);

    cout << sum(anotherVector) << endl;
    cout << avg(anotherVector) << endl;
    cout << low(anotherVector) << endl;

    string thisStatementIsFalse = "I love Visual Studio Code!";

    cout << camelCase(thisStatementIsFalse);

    return EXIT_SUCCESS;
}