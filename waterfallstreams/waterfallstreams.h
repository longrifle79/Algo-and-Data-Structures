#ifndef __WATERFALLSTREAMS_H__
#define __WATERFALLSTREAMS_H__

#include <string>
#include <vector>
#include <iostream>
using namespace std;


void print_out_array(const std::vector<std::vector<double>>& water_array);
int getLeftIndex(vector<vector<double>> water, int row, int col);
int getRightIndex(vector<vector<double>> water, int row, int col, int colSize);
vector<double> waterfallstreams(vector<vector<double>> water, int source);
void checkWaterFall(vector<double>& output, vector<vector<double>>  water,
    int i,
    int rowSize,
    int colSize,
    int t,
    double waterValue);


#endif


