#ifndef __HUNTING_FOR_APRTMENTS_H__
#define __HUNTING_FOR_APRTMENTS_H__


#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int apartmentHuntingDisplay(vector<unordered_map<string, bool>> blocks, vector<string> reqs);
int apartmentHunting(vector<unordered_map<string, bool>> blocks, vector<string> reqs);
int apartmentHunting2(vector<unordered_map<string, bool>> blocks, vector<string> reqs);
void display_data(int i, int r, int j, vector<int> b, vector<int> a, string loop);



#endif




