class MedianFinder {
public:
    priority_queue<int> decreasing;//min heap
    priority_queue<int, vector<int>, greater<int>> increasing;//max heap
    bool evn = true;
    MedianFinder() {
    }
    void addNum(int num) {
        evn =!evn;
        if(!evn){//if odd,contain lower half of heap
        decreasing.push(num);
        increasing.push(decreasing.top());
        decreasing.pop();}
        else{//if even,contain upper half of heap
              increasing.push(num);
              decreasing.push(increasing.top());
              increasing.pop();
        }
    }
    double findMedian() {
        if (!evn) return increasing.top();
        return (decreasing.top() + increasing.top()) / 2.0;
    }
};//balance kro heap ko 
