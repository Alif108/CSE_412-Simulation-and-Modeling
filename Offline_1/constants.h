# include <bits/stdc++.h>

#define Q_LIMIT 100     /* Limit on queue length. */
#define BUSY 1          /* Mnemonics for server's being busy */
#define IDLE 0          /* and idle. */

int next_event_type;
int num_custs_delayed; 
int num_delays_required;
int num_events;
int num_in_q;
int server_status;

float area_num_in_q;
float area_server_status;
float mean_interarrival;
float mean_service;
float sim_time;
float time_arrival[Q_LIMIT + 1];
float time_last_event; 
float time_next_event[3];
float total_of_delays;

FILE *infile, *outfile;
void initialize(void);
void timing(void);
void arrive(void);
void depart(void);
void report(void);
void update_time_avg_stats(void);
float expon(float mean);