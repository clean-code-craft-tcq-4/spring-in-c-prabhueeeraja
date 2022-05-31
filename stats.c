#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats minmax;
    minmax.average = 0;
    minmax.min = 0;
    minmax.max = 0;
  int i;
  float sum = 0;
  
  if(setlength == 0)
  {
    minmax.average = NAN;
    minmax.min = NAN;
    minmax.max = NAN;
  }
    
  if (setlength == 1)
  {
     minmax.max = numberset[0];
     minmax.min = numberset[0];
     minmax.max = numberset[0];
     return minmax;
  }   
 
  if (numberset[0] > numberset[1]) 
  {
      minmax.max = numberset[0];
      minmax.min = numberset[1];
  } 
  else
  {
      minmax.max = numberset[1];
      minmax.min = numberset[0];
  }   
 
  for (i = 2; i<setlength; i++)
  {
    if (numberset[i] >  minmax.max)     
      minmax.max = numberset[i];
   
    else if (numberset[i] <  minmax.min)     
      minmax.min = numberset[i];
  }
  
  for (i=0; i<setlength;i++)
   {
      sum=sum+numberset[i];
      minmax.average=(float)sum/(i+1);
   }
  
  return minmax;
}

