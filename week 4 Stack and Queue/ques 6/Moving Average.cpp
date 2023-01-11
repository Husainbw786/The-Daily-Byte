class MovingAverage {
public:
    /*
    * @param size: An integer*/
int k = 0;
deque<int>dq;
double sum = 0;

    MovingAverage(int size) {
        // do intialization if necessary
        k = size;
    }

    /*
     * @param val: An integer
     * @return:  
     */
    double next(int val) {
        // write your code here
        dq.push_back(val);
        sum += val;
        if(dq.size() > k)
        {
            sum -= dq.front();
            dq.pop_front();
        }
        int n = min((int)dq.size(),k);
        return sum/n;
    }

};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param = obj.next(val);
 */
