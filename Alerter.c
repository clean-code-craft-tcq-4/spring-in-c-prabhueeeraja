#include "stats.h"



int fnemailAlerter()
{
  return 5;
}



int fnledAlerter()
{
  return 5;
}

int (*emailAlerter) () = fnemailAlerter;
int (*ledAlerter) () = fnledAlerter;
