
#include<iostream>
#include<numeric>
using namespace std;

struct Stats compute_statistics(const float* numberset, int setlength);

int emailAlerter();

int ledAlerter()

extern int emailAlertCallCount;
extern int ledAlertCallCount;

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);


struct Stats
   	 {
		float average;
		float max;
		float min;
	};

