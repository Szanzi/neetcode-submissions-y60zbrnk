/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int> starts, ends;
        for(const auto &interval : intervals) {
            starts.push_back(interval.start);
            ends.push_back(interval.end);
        }
        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());
        int n = starts.size();
        int count = 0;
        int ans = 0;
        int s = 0, e = 0;
        while(s < n) {
            if(starts[s] < ends[e]) {
                count++;
                s++;
            } else {
                count--;
                e++;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
