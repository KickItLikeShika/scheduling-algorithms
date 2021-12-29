#include<stdio.h>  
#include<conio.h>  
  
void main()  
{  
    int i, NOP, sum=0,count=0, y, wt=0, tat=0, temp[10];  
    float avg_wt, avg_tat;  
    int at[] = {0, 3, 4, 9};
    Int quant = 10
    int n = sizeof proc / sizeof proc[0];
    int bt[] = {60, 30, 40, 10};  

// Display the process No, burst time, Turn Around Time and the waiting time  
printf("\n Process No \t\t Burst Time \t\t TAT \t\t Waiting Time ");  
for(sum=0, i = 0; y!=0; )  
{  
if(temp[i] <= quant && temp[i] > 0) // define the conditions   
{  
    sum = sum + temp[i];  
    temp[i] = 0;  
    count=1;  
    }     
    else if(temp[i] > 0)  
    {  
        temp[i] = temp[i] - quant;  
        sum = sum + quant;    
    }  
    if(temp[i]==0 && count==1)  
    {  
        y--; //decrement the process no.  
        printf("\nProcess No[%d] \t\t %d\t\t\t\t %d\t\t\t %d", i+1, bt[i], sum-at[i], sum-at[i]-bt[i]);  
        wt = wt+sum-at[i]-bt[i];  
        tat = tat+sum-at[i];  
        count =0;     
    }  
    if(i==NOP-1)  
    {  
        i=0;  
    }  
    else if(at[i+1]<=sum)  
    {  
        i++;  
    }  
    else  
    {  
        i=0;  
    }  
}  
// represents the average waiting time and Turn Around time  
avg_wt = wt * 1.0/NOP;  
avg_tat = tat * 1.0/NOP;  
printf("\n Average Turn Around Time: \t%f", avg_wt);  
printf("\n Average Waiting Time: \t%f", avg_tat);  
getch();
