#include <iostream>
using namespace std;

struct Process {
    int pid;
    int arrivalTime;
    int burstTime;
    int priority;
    int waitingTime;
    int turnaroundTime;
    int completionTime;
};

// Bubble sort based on arrival time, then priority (higher number = higher priority)
void sortByArrivalAndPriority(Process proc[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (proc[j].arrivalTime > proc[j + 1].arrivalTime ||
                (proc[j].arrivalTime == proc[j + 1].arrivalTime &&
                 proc[j].priority < proc[j + 1].priority)) {
                swap(proc[j], proc[j + 1]);
            }
        }
    }
}

// Calculate waiting time, turnaround time, and completion time
void calculateTimes(Process proc[], int n) {
    int currentTime = 0;

    for (int i = 0; i < n; ++i) {
        if (currentTime < proc[i].arrivalTime) {
            currentTime = proc[i].arrivalTime;
        }

        proc[i].waitingTime = currentTime - proc[i].arrivalTime;
        proc[i].completionTime = currentTime + proc[i].burstTime;
        proc[i].turnaroundTime = proc[i].completionTime - proc[i].arrivalTime;
        currentTime += proc[i].burstTime;
    }
}

// Display all process information
void displayProcesses(Process proc[], int n) {
    cout << "\nPID\tArrival\tBurst\tPriority\tWaiting\tTurnaround\tCompletion\n";
    for (int i = 0; i < n; ++i) {
        cout << proc[i].pid << "\t"
             << proc[i].arrivalTime << "\t"
             << proc[i].burstTime << "\t"
             << proc[i].priority << "\t\t"
             << proc[i].waitingTime << "\t"
             << proc[i].turnaroundTime << "\t\t"
             << proc[i].completionTime << endl;
    }
}

// Compute and display averages
void computeAverages(Process proc[], int n) {
    float totalWaiting = 0, totalTurnaround = 0, totalCompletion = 0;

    for (int i = 0; i < n; ++i) {
        totalWaiting += proc[i].waitingTime;
        totalTurnaround += proc[i].turnaroundTime;
        totalCompletion += proc[i].completionTime;
    }

    cout << "\nAverage Waiting Time: " << totalWaiting / n;
    cout << "\nAverage Turnaround Time: " << totalTurnaround / n;
    cout << "\nAverage Completion Time: " << totalCompletion / n << endl;
}

// Main function
int main() {
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    Process proc[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for Process " << i + 1 << ":\n";
        cout << "PID: ";
        cin >> proc[i].pid;
        cout << "Arrival Time: ";
        cin >> proc[i].arrivalTime;
        cout << "Burst Time: ";
        cin >> proc[i].burstTime;
        cout << "Priority (Higher number = higher priority): ";
        cin >> proc[i].priority;
    }

    sortByArrivalAndPriority(proc, n);
    calculateTimes(proc, n);
    displayProcesses(proc, n);
    computeAverages(proc, n);

    return 0;
}
