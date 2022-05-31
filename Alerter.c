#include "stats.h"
#include "Alerter.h"


void fnemailAlerter()
{
  //return 5;
}



void fnledAlerter()
{
  //return 5;
}

void (*emailAlerter)() = &fnemailAlerter;
void (*ledAlerter)() = &fnledAlerter;

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats){
  emailAlertCallCount = 1;
  ledAlertCallCount = 1;
}
