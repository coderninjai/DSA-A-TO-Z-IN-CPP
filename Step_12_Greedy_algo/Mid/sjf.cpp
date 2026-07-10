#include <vector>
#include<bits/stdc++.h>
using namespace std;

// Class that implements Shortest Job First (SJF) scheduling
class ShortestJobFirst {
public:
    // Function to calculate average waiting time
    float calculateAverageWaitTime(vector<int>& jobs) {
        // Sort jobs in ascending order (Shortest Job First)
        sort(jobs.begin(), jobs.end());

        float waitTime = 0;  // Stores cumulative waiting time
        int totalTime = 0;   // Tracks elapsed execution time
        int n = jobs.size(); // Number of jobs

        // Iterate through each job to calculate waiting time
        for (int i = 0; i < n; i++) {
            waitTime += totalTime;  // Add current total time to waiting time
            totalTime += jobs[i];   // Execute current job
        }

        // Return the average waiting time
        return waitTime / n;
    }
};

int main() {
    vector<int> jobs = {4, 3, 7, 1, 2};

    cout << "Array Representing Job Durations: ";
    for (int job : jobs) cout << job << " ";
    cout << endl;

    ShortestJobFirst sjf;
    float ans = sjf.calculateAverageWaitTime(jobs);

    cout << "Average waiting time: " << ans << endl;
    return 0;
}
