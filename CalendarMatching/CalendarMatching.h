#ifndef __CALENDARMATCHING_H__
#define __CALENDARMATCHING_H__
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct StringMeeting
{
	string start;
	string end;
};
// ************************TEST DATA********************************************

// timeToMinutes() converts a string representing time such as "9:30"
//	into an integer represnting how many minutes that time is from "00:00" oclock such as "570"
int timeToMinutes(string& st);

// minutesToTime() does the oppisite of timeToMinutes() it takes an integer such as "570
//	and converts it to a string such as "9:30"
string minutesToTime(int minutes);

//	The min() function takes two string converts the values of the strings to integers and
//	compares the values.  It then returns the larger of the two strings in a string format
string min(string& a, string& b);

//	This overloads the " > " operator. giving it the ability to compare two strings
bool operator>(string& a, string& b);

//	This overloads the " < " operator. giving it the ability to compare two strings
bool operator<(string& a, string& b);

vector<StringMeeting> calendarMatching(vector<StringMeeting> calendar1,
	StringMeeting dailyBounds1,
	vector<StringMeeting> calendar2,
	StringMeeting dailyBounds2,
	int meetingDuration);




#endif


