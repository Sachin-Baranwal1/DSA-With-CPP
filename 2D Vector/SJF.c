#include<stdio.h>

int main()
{
    int n, i, j, temp;
    int at[20], bt[20], ct[20], tat[20], wt[20], p[20];
    float total_tat = 0, total_wt = 0, avg_tat, avg_wt;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("\nEnter Arrival Time and Burst Time for each process:\n");
    for(i = 0; i < n; i++) 
    {
        printf("Process %d Arrival Time: ", i+1);
        scanf("%d", &at[i]);
        printf("Process %d Burst Time: ", i+1);
        scanf("%d", &bt[i]);
        p[i] = i+1; // Process IDs
    }

    // Sorting based on Arrival Time
    for(i = 0; i < n; i++) 
    {
        for(j = i+1; j < n; j++) 
        {
            if(at[i] > at[j]) 
            {
                // Swapping arrival times
                temp = at[i];
                at[i] = at[j];
                at[j] = temp;

                // Swapping burst times
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                // Swapping process IDs
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    // Calculating Completion Time, Turnaround Time, and Waiting Time
    ct[0] = at[0] + bt[0]; // First process completion time
    for(i = 1; i < n; i++) 
    {
        if(ct[i-1] < at[i]) 
        {
            ct[i] = at[i] + bt[i]; // If the CPU is idle
        } 
        else 
        {
            ct[i] = ct[i-1] + bt[i];
        }
    }

    for(i = 0; i < n; i++) 
    {
        tat[i] = ct[i] - at[i]; // Turnaround Time
        wt[i] = tat[i] - bt[i]; // Waiting Time

        total_tat += tat[i];
        total_wt += wt[i];
    }

    avg_tat = total_tat / n; // Average Turnaround Time
    avg_wt = total_wt / n;   // Average Waiting Time

    // Printing results
    printf("\nProcess\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time");
    for(i = 0; i < n; i++) 
    {
        printf("\np%d\t\t%d\t\t%d\t\t%d\t\t\t%d\t\t\t%d", p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    printf("\n\nAverage Turnaround Time = %.2f", avg_tat);
    printf("\nAverage Waiting Time = %.2f", avg_wt);

    return 0;
}