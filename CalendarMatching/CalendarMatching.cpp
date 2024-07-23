#include "CalendarMatching.h"


	
int timeToMinutes(string& st)
{
	int pos = st.find(":");
	int hr = stoi(st.substr(0, pos));
	int min = stoi(st.substr(pos + 1, st.size()));
	return hr * 60 + min;
}

string minutesToTime(int minutes)
{
	int hr = minutes / 60;
	int mn = minutes % 60;
	string hourStr = to_string(hr);
	string minStr = to_string(mn);
	if (minStr.size() == 1) minStr = "0" + minStr;
	return hourStr + ":" + minStr;
}

string min(string& a, string& b)
{
	if (timeToMinutes(a) < timeToMinutes(b))
	{
		return a;
	}
	else
	{
		return b;
	}
}

bool operator<(string& a, string& b)
{
	return (timeToMinutes(a) < timeToMinutes(b));
}

bool operator>(string& a, string& b)
{
	return (timeToMinutes(b) < timeToMinutes(a));
}

vector<StringMeeting> calendarMatching(	vector<StringMeeting> calendar1,
										StringMeeting dailyBounds1,
										vector<StringMeeting> calendar2,
										StringMeeting dailyBounds2,
										int meetingDuration)
{
	vector<StringMeeting> res, inter1, inter2;
	calendar1.insert(calendar1.begin(), { dailyBounds1.start, dailyBounds1.start });
	calendar1.push_back({ dailyBounds1.end, dailyBounds1.end });
	calendar2.insert(calendar2.begin(), { dailyBounds2.start, dailyBounds2.start });
	calendar2.push_back({ dailyBounds2.end, dailyBounds2.end });

	
	//	Create a vector that is populated with "open" time slots of calendar1
		for(int i = 0; i + 1 < calendar1.size(); i++)
		{
			inter1.push_back({ calendar1[i].end, calendar1[i + 1].start });
		}
				
	//	Create a vector that is populated with "open" time slots of calendar2
		for (int i = 0; i + 1 < calendar2.size(); i++)
		{
			inter2.push_back({calendar2[i].end, calendar2[i + 1].start });
		}
	//**********************************************************************************************
		//*** the if statements "if(end1 > start2 && end2 > start1) means there is overlap in the times***
		int i = 0, j = 0;
		while (i < inter1.size() && j < inter2.size())//run until both calendars are gone through
		{
			auto L1 = inter1[i].start, R1 = inter1[i].end, L2 = inter2[j].start, R2 = inter2[j].end;
			if (L2 > R1) i++;
			else if (R2 < L1) j++;
			else
			{
				if (R1 < R2) i++; else j++;
					string MaxL = "", MinR = "";
					MinR = min(R1, R2);
					MaxL = max(L1, L2);
					if (MaxL == MinR)continue;
					if (res.empty())
					{
						res.push_back({ MaxL, MinR });
					}
					else
					{
						if (res.back().end == MaxL)
						{
							auto last = res.back();
							res.pop_back();
							res.push_back({ last.start, MinR });
						}
						else
						{
							res.push_back({ MaxL, MinR });
						}
					}
			}
		}
		vector<StringMeeting> res2;
		for (auto i : res)
		{
			if (timeToMinutes(i.end) - timeToMinutes(i.start) >= meetingDuration)
			{
				res2.push_back(i);
			}
		}
		return res2;
}