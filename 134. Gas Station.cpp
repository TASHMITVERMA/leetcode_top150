class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int total_gas = 0, current_gas = 0;
        int start_station = 0;
        for (int i = 0; i < n; ++i) {
            total_gas += gas[i] - cost[i];
            current_gas += gas[i] - cost[i];
            // -ve, start from agla station
            if (current_gas < 0) {
                start_station = i + 1;
                current_gas = 0;
            }
        }
        // agar total gas bada ya equal to total cost,circuit ban gaya
        if (total_gas >= 0)
            return start_station;
        else
            return -1; //circuit nhi bana
    }
};
