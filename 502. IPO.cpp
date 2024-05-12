class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int, int>> ip(n);
        for(int i = 0; i < n; i++)
            ip[i] = make_pair(capital[i], profits[i]);
        sort(ip.begin(), ip.end());
        priority_queue<int> pq;
        int i = 0;
        while(k--) {
            while(i < n && ip[i].first <= w)
                pq.push(ip[i++].second);
            if(pq.empty())
                break;
            w += pq.top();
            pq.pop();
        }
        return w;
    }
};
