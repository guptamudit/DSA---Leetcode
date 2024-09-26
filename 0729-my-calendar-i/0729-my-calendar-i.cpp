class MyCalendar {
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for (const auto& event : events) {
            if (max(event.first, start) < min(event.second, end)) {
                return false; // There is an overlap
            }
        }
        events.push_back({start, end});
        return true;
    }

private:
    vector<pair<int, int>> events;
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */