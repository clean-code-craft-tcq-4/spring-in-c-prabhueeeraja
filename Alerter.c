#include "stats.h"
#include "Alerter.h"


void fnemailAlerter()
{
  emailAlertCallCount++;
}



void fnledAlerter()
{
  ledAlertCallCount++;
}

void (*emailAlerter)() = &fnemailAlerter;
void (*ledAlerter)() = &fnledAlerter;

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats){
  alerters[0]();
  alerters[1]();
}
