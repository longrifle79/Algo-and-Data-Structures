#include "CalendarMatching.h"
#include <iostream>
#include <string>
using namespace std;

vector<StringMeeting> cal1 = { {"9:00", "10:30"}, {"12:00", "13:00"}, {"16:00", "18:00"} };
vector<StringMeeting> cal2 = { {"10:00", "11:30"}, {"12:30", "14:30"}, {"14:30", "15:00"}, {"16:00", "17:00"} };

struct StringMeeting bound1 = { "9:00", "20:00" };
struct StringMeeting bound2 = { "10:00", "18:30" };

int dur = 30;

int main()
{
	vector<StringMeeting> times = calendarMatching(cal1,bound1,cal2,bound2,dur);
	
	for (int i = 0; i < times.size(); i++)
	{
		cout << "start time: " << times[i].start << "    end time: " << times[i].end << endl;
	}
	return 0;
}


