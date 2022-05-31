#include "stats.h"

int (*emailAlerter) () = fnemailAlerter;

int fnemailAlerter()
{
  return 5;
}

int (*ledAlerter) () = fnledAlerter;

int fnledAlerter()
{
  return 5;
}

