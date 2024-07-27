#include "hunting_for_apartments.h"


int apartmentHuntingDisplay(vector<unordered_map<string, bool>> blocks, vector<string> reqs)
{
	vector<int> dists[2];
	dists[0].resize(blocks.size());
	dists[1].resize(blocks.size());
	
	for (int r = 0; r < reqs.size(); ++r)//for loop 1
	{
		int i = r & 1;		//this toggles “i” from 1 and 0  every other iteration
							//populate distances from the left		
		for (int j = 0; j < blocks.size(); ++j)// for loop 2		
		{			
			if (blocks[j][reqs[r]])
			{
				dists[i][j] = 0;//block has req				
			}
			else if (j == 0 || dists[i][j - 1] == INT_MAX)
			{
				dists[i][j] = INT_MAX; // no block has req from the left				
			}
			else
			{
				dists[i][j] = dists[i][j - 1] + 1;				
			}			
		}// END OF for loop 2
		// populate distances from the right		
		for (int j = (blocks.size() - 2); j >= 0; --j)//for loop 3
		{
			dists[i][j] = min(dists[i][j], dists[i][j + 1] + 1);
		}//END OF for loop 3
		// merge with the previous req’s distances
		for (int j = 0; j < blocks.size(); ++j)//for loop 4
		{
			dists[i][j] = max(dists[i][j], dists[i ^ 1][j]);
		}//END OF for loop 4
	}// END OF for loop 1

	const vector<int>& dist = dists[(reqs.size() - 1) & 1];
	return min_element(begin(dist), end(dist)) - begin(dist);
}// END OF apartmentHunting()



int apartmentHunting(vector<unordered_map<string, bool>> blocks, vector<string> reqs)
{
	vector<int> diststance_to_last_requirement[2];
	diststance_to_last_requirement[0].resize(blocks.size());
	diststance_to_last_requirement[1].resize(blocks.size());

	
	for (int requirement_index = 0; requirement_index < reqs.size(); ++requirement_index)//for loop 1
	{
		int i = requirement_index & 1;
		
		for (int j = 0; j < blocks.size(); ++j)// for loop 2		
		{
			if (blocks[j][reqs[requirement_index]])
			{
				diststance_to_last_requirement[i][j] = 0;
			}
			else if (j == 0 || diststance_to_last_requirement[i][j - 1] == INT_MAX)
			{
				diststance_to_last_requirement[i][j] = INT_MAX; // no block has req from the left
			}
			else
			{
				diststance_to_last_requirement[i][j] = diststance_to_last_requirement[i][j - 1] + 1;
			}
		}// END OF for loop 2


		// populate distances from the right
		for (int j = (blocks.size() - 2); j >= 0; --j)//for loop 3
		{
			diststance_to_last_requirement[i][j] = min(diststance_to_last_requirement[i][j], diststance_to_last_requirement[i][j + 1] + 1);
		}//END OF for loop 3
		// merge with the previous req’s distances
		for (int j = 0; j < blocks.size(); ++j)//for loop 4
		{
			diststance_to_last_requirement[i][j] = max(diststance_to_last_requirement[i][j], diststance_to_last_requirement[i ^ 1][j]);
		}//END OF for loop 4
	}// END OF for loop 1
	const vector<int>& dist = diststance_to_last_requirement[(reqs.size() - 1) & 1];

	return min_element(begin(diststance_to_last_requirement), end(diststance_to_last_requirement)) - begin(diststance_to_last_requirement);
}// END OF apartmentHunting()

int apartmentHunting2(vector<unordered_map<string, bool>> blocks, vector<string> reqs)
{
	vector<int> dists[2];
	dists[0].resize(blocks.size());
	dists[1].resize(blocks.size());
	cout << blocks.size() - 2 << endl;
	for (int r = 0; r < reqs.size(); ++r)
	{
		int i = r & 1;
		for (int j = 0; j < blocks.size(); ++j)
		{
			if (blocks[j][reqs[r]])
			{
				dists[i][j] = 0;
			}
			else if (j == 0 || dists[i][j - 1] == INT_MAX)
			{
				dists[i][j] = INT_MAX;
			}
			else
			{
				dists[i][j] = dists[i][j - 1] + 1;
			}
		}
		for (int j = blocks.size() - 2; j >= 0; --j)
		{
			dists[i][j] = min(dists[i][j], dists[i][j + 1] + 1);
		}
		for (int j = 0; j < blocks.size(); ++j)
		{
			dists[i][j] = max(dists[i][j], dists[i ^ 1][j]);
		}
	}
	const vector<int>& dist = dists[(reqs.size() - 1) & 1];
	return min_element(begin(dist), end(dist)) - begin(dist);
}




