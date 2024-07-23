#include "waterfallstreams.h"

int water_source = 3;
vector<vector<double>> water_array = {  {0, 0, 0, 0, 0, 0, 0},
                                        {1, 0, 0, 0, 0, 0, 0},
                                        {0, 0, 1, 1, 1, 0, 0},
                                        {0, 0, 0, 0, 0, 0, 0},
                                        {1, 1, 1, 0, 0, 1, 0},
                                        {0, 0, 0, 0, 0, 0, 1},
                                        {0, 0, 0, 0, 0, 0, 0} };

void print_out_array(const std::vector<std::vector<double>>& water_array)
{
    for (int i = 0; i < water_array.size(); i++)
    {
        for (int j = 0; j < water_array[i].size(); j++)
        {
            cout << water_array[i][j];
        }
        cout << endl;
    }
}

int getLeftIndex(vector<vector<double>> water, int row, int col)
{
    while (col >= 0 && water[row + 1][col] == 1)
    {
        col--;
    }
    return col;
}

int getRightIndex(vector<vector<double>> water, int row, int col, int colSize)
{
    while (water[row + 1][col] == 1 && col < colSize)
    {
        col++;
    }
    return col;
}

void checkWaterFall(vector<double> &output, vector<vector<double>>  water, 
                                                                    int i, 
                                                                    int rowSize, 
                                                                    int colSize, 
                                                                    int t, 
                                                                    double waterValue)
{
    while (i < rowSize - 1 && water[i + 1][t] == 0)
    {
        i++;
    }
    if (i + 1 == rowSize)
    {
        output[t] += waterValue;
        return;
    }
    if (t < colSize && t > 0 && water[i + 1][t] != 0)
    {
        int left = -1, right = colSize;
        if (!(water[i][t - 1] == 1 && water[i + 1][t] == 1))
        {
            left = getLeftIndex(water, i, t);
        }
        if (!(water[i][t + 1] == 1 && water[i + 1][t] == 1))
        {
            right = getRightIndex(water, i, t, colSize);    //5
        }
        cout << "left" << left << "right: " << right << endl;
        if (left != -1)
        {
            cout << "checkWaterFall in the if line 72" << endl;
            checkWaterFall(output, water, i + 1, rowSize, colSize, left, waterValue / 2);
        }
        if (right != colSize)
        {
            cout << "checkWaterFall in the if line 77" << endl;
            checkWaterFall(output, water, i + 1, rowSize, colSize, right, waterValue / 2);
        }
    }
}

vector<double> waterfallstreams(vector<vector<double>> water, int source)
{
    vector<double> output;
    output = vector<double>(water[0].size(), 0);
    checkWaterFall(output, water, 0, water.size(), water[0].size(), source, 100);
    return output;
}
