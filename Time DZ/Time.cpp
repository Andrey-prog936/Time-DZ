#include "Time.h"

Time::Time(int hours, int minutes, int seconds)
{
	while (seconds >= 60)
	{
		seconds = seconds - 60;
		minutes = minutes + 1;
	}
	while (minutes >= 60)
	{
		minutes = minutes - 60;
		hours = hours + 1;
	}
	this->hours = hours;
	this->minute = minutes;
	this->seconds = seconds;
}
Time::Time(int second)
{
	hours = second / 3600;
	minute = (second - hours * 3600) / 60;
	this->seconds = second - (hours * 3600 + minute * 60);
}
void Time::Add1Second()
{
	this->seconds = seconds + 1;
	if (this->seconds >= 60)
	{
		this->seconds = seconds - 60;
		this->minute = minute + 1;
	}
}
void Time::Print() const
{
	cout << "Time: " << hours << ":" << minute << ":" << seconds << endl;
}
//~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~
Time Time::operator+(const Time& other) const
{
	return Time(this->hours + other.hours, this->minute + other.minute, this->seconds + other.seconds);
}
Time Time::operator-(const Time& other) const
{
	return Time(this->hours - other.hours, this->minute - other.minute, this->seconds - other.seconds);
}
Time Time::operator*(const Time& other) const
{
	return Time(this->hours * other.hours, this->minute * other.minute, this->seconds * other.seconds);
}
Time Time::operator/(const Time& other) const
{
	return Time(this->hours / other.hours, this->minute / other.minute, this->seconds / other.seconds);
}
//~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~-=-~
bool Time::operator>(const Time& other) const
{
	return((this->hours + this->minute + this->seconds) > (other.hours + other.minute + other.seconds));
}
bool Time::operator<(const Time& other) const
{
	return((this->hours + this->minute + this->seconds) < (other.hours + other.minute + other.seconds));
}
bool Time::operator>=(const Time& other) const
{
	return((this->hours + this->minute + this->seconds) >= (other.hours + other.minute + other.seconds));
}
bool Time::operator<=(const Time& other) const
{
	return((this->hours + this->minute + this->seconds) <= (other.hours + other.minute + other.seconds));
}
bool Time::operator==(const Time& other) const
{
	return((this->hours + this->minute + this->seconds) == (other.hours + other.minute + other.seconds));
}
bool Time::operator!=(const Time& other) const
{
	return((this->hours + this->minute + this->seconds) != (other.hours + other.minute + other.seconds));
}