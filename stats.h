
#include<iostream>
#include<numeric>
#include <math.h>

#ifdef NAN
/* NAN is supported */
#endif

using namespace std;

struct Stats compute_statistics(const float* numberset, int setlength);

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

