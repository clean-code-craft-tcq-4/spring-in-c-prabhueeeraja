#include "stats.h"

alerter_funcptr alter;

alter = emailAlerter;

int emailAlerter()
{
  return 5;
}

alter = ledAlerter;

int ledAlerter()
{
  return 5;
}

