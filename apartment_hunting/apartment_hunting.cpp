#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include "hunting_for_apartments.h"
using namespace std;



std::vector<std::unordered_map<std::string, bool>> blocks =
{

	{

		{"gym", false},

		{"school", true},

		{"store", false}

	},

	{

		{"gym", true},

		{"school", false},

		{"store", false}

	},

	{

		{"gym", true},

		{"school", true},

		{"store", false}

	},

	{

		{"gym", false},

		{"school", true},

		{"store", false}

	},

	{

		{"gym", false},

		{"school", true},

		{"store", true}

	}

};


std::vector<std::string> reqs =
{

	"gym", "school", "store"

};



int main()
{
	int winner1 = apartmentHuntingDisplay(blocks, reqs);
	int winner2 = apartmentHunting(blocks, reqs);
	int winner3 = apartmentHunting2(blocks, reqs);
	cout << "the winner1 is:  " << winner1 << endl;
	cout << "the winner2 is:  " << winner2 << endl;
	cout << "the winner3 is:  " << winner3 << endl;
}

