#include <cstdio>
#include <iostream>
#include "Clock.h"

Clock::Clock(int hr, int min, int sec) : m_hour(hr), m_min(min), m_seconds(sec) {}

void Clock::Tick() {
	m_seconds++;
	if (m_seconds >= 60) {
		m_seconds = 0;
		m_min++;
		if (m_min >= 60) {
			m_min = 0;
			m_hour++;
			if (m_hour > 23) {
				m_hour = 0;
			}
		}
	}
}




void Clock::Time(char buffer[], int len) const {

	snprintf(buffer,len,"%02d:%02d:%02d",m_hour,m_min, m_seconds);
}