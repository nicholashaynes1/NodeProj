/*
 * Timer.cpp
 *
 *  Created on: Feb 16, 2016
 *      Author: nhay7834
 */

#include "Timer.h"
#include <iostream>
#include <iomanip> //Makes Output look good
using namespace std;

Timer::Timer()
{
 executionTime = 0;
}


Timer::~Timer()
{

}

void Timer::startTimer()
{
	executionTime = clock();
}

void Timer::stopTimer()
{
	executionTime = clock() - executionTime;
}

void Timer::resetTimer()
{
	executionTime = 0;
}


void Timer::displayTimerInfo()
{
	cout<<fixed;
	cout<<setprecision(8);

	cout<< executionTime << " microseconds for the code" <<endl;
	cout <<"Which is " << float(executionTime)/CLOCKS_PER_SEC<<" seconds"<<endl;
}
