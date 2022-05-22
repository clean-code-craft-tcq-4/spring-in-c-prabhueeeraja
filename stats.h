
#include<iostream>
#include<numeric>
using namespace std;

struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;

struct Stats
   	 {
		float Average;
		float Max;
		float Min;
	};

