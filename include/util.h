/**
* @file util.h
* @brief  Week 10, C++ Review and Warmup from CSI140
*
* @author Grant Mahoney
* @assignment Lecture 10.1
* @date 11/8/2020
* @credits
* 
*/

#ifndef UTIL_H
#define UTIL_H

#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;

string randomElement(vector<string> input);

double sum(vector<double> input);
double avg(vector<double> input);
double low(vector<double> input);

string camelCase(string input);

#endif