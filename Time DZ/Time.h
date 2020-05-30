#pragma once
#include <iostream>
using namespace std;
class Time
{
private:
	int hours;
	int minute;
	int seconds;

public:
	Time() : hours(0), minute(0), seconds(0){	}
	Time(int hours, int minutes, int seconds);
	explicit Time(int second);
	void Add1Second();
	void Print() const;
	void glek(int hours, int minutes, int seconds);
	//~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-
	Time operator+(const Time& other) const;
	Time operator-(const Time& other) const;
	Time operator*(const Time& other) const;
	Time operator/(const Time& other) const;
	//~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-
	bool operator>(const Time& other) const;
	bool operator<(const Time& other) const;
	bool operator>=(const Time& other) const;
	bool operator<=(const Time& other) const;
	bool operator==(const Time& other) const;
	bool operator!=(const Time& other) const;
};