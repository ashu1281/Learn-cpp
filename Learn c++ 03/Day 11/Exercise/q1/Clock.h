#pragma once

class Clock {
public:
	//convertss time given in hr:mm:sec into seconcds and store same in m_seconds
	// Note hr should be between 0 and 23
	//min and sec should be between 

	Clock(int hr = 0, int min = 0, int sec = 0);

public:
	void Tick();

	void Time(char buffer[], int len)const;

private:
	unsigned int m_hour;
	unsigned int m_min;
	unsigned int m_seconds;
};