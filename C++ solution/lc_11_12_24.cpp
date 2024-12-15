class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
    vector<pair<int, int>> events;
    for (int num : nums) {
        events.emplace_back(num - k, 1);      
        events.emplace_back(num + k + 1, -1); 
    }
    sort(events.begin(), events.end());
    int maxBeauty = 0, activeRanges = 0;
    for (const auto& event : events) {
        activeRanges += event.second; 
        maxBeauty = max(maxBeauty, activeRanges);
    }

    return maxBeauty;
    }
};
