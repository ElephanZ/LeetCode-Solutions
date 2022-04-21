// runtime: 216ms, faster than 43.65% of C++ online submissions for Two Sum III
// memory usage: 8.5MB, less than 17.91% of C++ online submissions for Two Sum III

class TwoSum {
public:
    unordered_map<long, long> values;
    
    TwoSum() {
        
    }
    
    void add(int number) {
        values[number]++;
    }
    
    bool find(int value) {
        
        for (auto num: values) 
            if (values.find(value - num.first) != values.end())
                if (value - num.first != num.first || (value - num.first == num.first && values[num.first] > 1))
                    return true;
        
        return false;
    }
};

//
// Your TwoSum object will be instantiated and called as such:
// TwoSum* obj = new TwoSum();
// obj->add(number);
// bool param_2 = obj->find(value);
//
