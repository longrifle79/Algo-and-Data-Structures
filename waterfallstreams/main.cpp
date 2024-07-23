#include "waterfallstreams.h"
#include "waterfallstreams_2.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

extern int water_source;
extern vector<vector<double>> water_array;
vector<vector<double>> water_array2 = { {0, 0, 0, 0, 0, 0, 0},
                                        {1, 0, 0, 0, 0, 0, 0},
                                        {0, 0, 1, 1, 1, 0, 0},
                                        {0, 0, 0, 0, 0, 0, 0},
                                        {1, 1, 1, 0, 0, 1, 0},
                                        {0, 0, 0, 0, 0, 0, 1},
                                        {0, 0, 0, 0, 0, 0, 0} };
int main()
{
    print_out_array(water_array);
    vector<double> answer_to_question = waterfallStreams2(water_array, water_source);
    for (int i = 0; i < answer_to_question.size(); i++)
    {
        cout << answer_to_question[i] << endl;
    }
    return 0;
}

