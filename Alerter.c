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
