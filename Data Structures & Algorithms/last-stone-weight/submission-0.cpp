class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (int& stone : stones) {
            pq.push(stone);
        }
        while(pq.size() >= 2) {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if (a > b) {
                a = a - b;
                pq.push(a);
            }
        }
        return (!pq.empty() ? pq.top() : 0);
    }
};
