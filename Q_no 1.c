#include 
#define MAX_QUEUE 100
typedef struct Processes  Process;
Process * queue[MAX_QUEUE];
int front = 0, rear = -1, processed = 0, curr_time = 0, tq = 6;
int last_front = 0, last_rear = -1;
void swap(Process * a, Process * b) 
void sort(Process p[], int n) 
}
if (swapped == 0)
break;
}
}
void enqueue(Process p[], int n) 
else

if (can_insert == 1)
queue[++rear] = &p[i];
}
}
}
for (i = last_front; i 
}
void execute() 
else 
else if (queue[i]->burst_time > 0)

}
}
}
int main() 
sort(&p[0], n); // Sort the processes according to the arrival time of each process.
while (1) 
printf("\nFront = %d, Rear = %d.\n\n", front, rear);
execute();
// If all the processes have been processed, break from the loop.
if (processed == n)
break;
}
return 0;
}
