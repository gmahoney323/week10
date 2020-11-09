/**
* @file util.cpp
* @brief  Week 10, C++ Review and Warmup from CSI230
*
* @author Grant Mahoney
* @assignment Lecture 10.1
* @date 11/8/2020
* @credits
* 
*/

#include "util.h"
#include <iostream>

//RETURNS A RANDOM ELEMENT IN A VECTOR
string randomElement(vector<string> input)
{
    srand (time(NULL));
    return input[rand()%input.size()];
}

//RETURNS THE SUM OF ALL THE ELEMENTS IN A VECTOR
double sum(vector<double> input)
{
    double sum = 0.0;
    for(double d : input)
    {
        sum+=d;
    }
    return sum;
}

//RETURNS THE AVERAGE OF THE ELEMENTS IN A VECTOR
double avg(vector<double> input)
{
    double sum = 0.0;
    for(double d : input)
    {
        sum+=d;
    }
    return sum / double(input.size());
}

//RETURNS THE ELEMENT OF LOWEST VALUE IN A VECTOR
double low(vector<double> input)
{
    double low = input[0];
    for(double d : input)
    {
        if(d<low)
            low = d;
    }
    return low;
}

//RETURNS A STRING THAT HAS BEEN CONVERTED INTO "CAMEL CASE"
string camelCase(string &input)
{
    string converted = "";
    const char * SPACE = " ";
    converted += tolower(input[0]);
    for(int i = 1; i<input.length(); i++)
    {
        if(input[i]==' ')
        {
            input[i+1] = toupper(input[i+1]);
        }
        else
        {
            converted+=input[i];
        }
    }
    return converted;
}