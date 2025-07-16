#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int bt[n], rt[n], wt[n] = {0};  // bt = burst time, rt = remaining time, wt = waiting time
    cout << "Enter burst times: ";
    for (int i = 0; i < n; i++) {
        cin >> bt[i];
        rt[i] = bt[i]; // Initialize remaining time
    }

    int quantum;
    cout << "Enter time quantum: ";
    cin >> quantum;

    // Step 2 will go here...

    int time = 0; // Total time counter
    bool done;

    do {
        done = true;

        for (int i = 0; i < n; i++) {
            if (rt[i] > 0) {
                done = false; // At least one process is still left

                if (rt[i] > quantum) {
                    time += quantum;
                    rt[i] -= quantum;
                } else {
                    time += rt[i];
                    wt[i] = time - bt[i]; // Calculate waiting time
                    rt[i] = 0;
                }
            }
        }
    } while (!done);


    int tat[n];
    float totalWT = 0, totalTAT = 0;

    cout << "\nProcess\tBT\tWT\tTAT\n";
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
        totalWT += wt[i];
        totalTAT += tat[i];
        cout << "P" << i+1 << "\t" << bt[i] << "\t" << wt[i] << "\t" << tat[i] << "\n";
    }
    cout << "Average Waiting Time: " << totalWT / n << endl;
    cout << "Average Turnaround Time: " << totalTAT / n << endl;

    return 0;
}


