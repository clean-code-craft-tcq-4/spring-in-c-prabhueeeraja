#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats minmax;
    minmax.average = 0;
    minmax.min = 0;
    minmax.max = 0;
  int i;
  float sum = 0;
  
  if (n == 1)
  {
     minmax.max = arr[0];
     minmax.min = arr[0];
     minmax.max = arr[0];
     return minmax;
  }   
 
  if (arr[0] > arr[1]) 
  {
      minmax.max = arr[0];
      minmax.min = arr[1];
  } 
  else
  {
      minmax.max = arr[1];
      minmax.min = arr[0];
  }   
 
  for (i = 2; i<n; i++)
  {
    if (arr[i] >  minmax.max)     
      minmax.max = arr[i];
   
    else if (arr[i] <  minmax.min)     
      minmax.min = arr[i];
  }
  
  for (i=0; i<n;i++)
   {
      sum=sum+arr[i];
      minmax.avg=(float)sum/(i+1);
   }
  
  return minmax;
}

