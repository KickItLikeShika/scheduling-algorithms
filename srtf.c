#include < stdio.h > 

	  int main() { 
	  int ari[10], total = 0, i, j, small, temp, k, waiting[10], finish[10]; 
	  float tavg = 0.0, wavg = 0.0; 
	  int ari[] = {0, 3, 4, 9};
	  Int priority[] = {3, 2, 1, 4};
	  int n = sizeof proc / sizeof proc[0];
	  int bur[] = {60, 30, 40, 10};
	  waiting[i] = 0; 
	  for (i = 0; i < n; i++) { 
	    for (j = i + 1; j < n; j++) 
	    { 
	      if (ari[i] > ari[j])
	      { 
	        temp = ari[i]; 
	        ari[i] = ari[j];
	        ari[j] = temp; 
	        temp = bur[i]; 
	        bur[i] = bur[j]; 
	        bur[j] = temp; 
	      } 
	    } 
	  } 
	  for (i = 0; i < total; I++) { 
	    small = 3200; 
	    for (j = 0; j < n; j++) { 
	      if ((bur[j] != 0) && (ari[j] <= i) && (bur[j] < small)) { 
	        small = bur[j]; 	
	        k = j; 
	      } 
	    } 
	    bur[k]--; 
	    procs[i] = k;
	  } 
	  k = 0; 
	  for (i = 0; i < total; i++)
	  { 
	    for (j = 0; j < n; j++) 
	    { 
	      if (procs[i] == j) 
	      { 
	        finish[j] = i; 
	        waiting[j]++;
	      } 
	    } 
	  } 
	  for (i = 0; i < n; i++) { 
	    printf("\n PROCESS %d:-FINISH TIME==> %d TURNAROUND TIME==>%d WAITING TIME==>%d\n", i + 1, finish[i] + 1, (finish[i] - ari[i]) + 1, (((finish[i] + 1) - waiting[i]) - ari[i])); 
	    wavg = wavg + (((finish[i] + 1) - waiting[i]) - ari[i]); 
	    tavg = tavg + ((finish[i] - ari[i]) + 1); 
	  } 
	  printf("\n WAvG==>\t%f\n TAVG==>\t%f\n", (wavg / n), (tavg / n)); 
	  return 0; 
	} 
