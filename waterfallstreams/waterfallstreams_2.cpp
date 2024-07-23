#include "waterfallstreams_2.h"
#include "waterfallstreams.h"







vector<double> waterfallStreams2(vector<vector<double>> array, int source) 
{
    vector<double> ret(array[0].size(), 0);
    ret[source] = 100.0f;

    for (int i = 1; i < array.size(); i++) 
    {
        for (int j = 0; j < array[0].size(); j++) 
        {
            //if some barrier
            if (array[i][j] != 0.0f)
            {
                // spread water to the left
                if (j > 0 && array[i - 1][j - 1] == 0.0f)
                {
                    for (int k = j - 1; k >= 0; k--)

                        if (array[i][k] == 0.0f)

                        {

                            ret[k] += ret[j] / 2.0f;

                            break;

                        }
                }
                // spread water to the right

                if (j < array[0].size() - 1 && array[i - 1][j + 1] == 0.0f)

                    for (int k = j + 1; k < array[0].size(); k++)

                        if (array[i][k] == 0.0f)

                        {

                            ret[k] += ret[j] / 2.0f;

                            break;

                        }

                //

                ret[j] = 0.0f;

            }

        }

    }



    return ret;

}