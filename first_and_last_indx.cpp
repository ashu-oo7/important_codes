 vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> res;
        int size = nums.size();
        int begin = 0, end = size - 1;
        //finding first index
        while(begin <= end) {
            int mid = begin + ((end - begin) >> 1);
            if(nums[mid] >= target) {
                end = mid - 1;
            } else {
                begin = mid + 1;
            }
        }
        if(begin < size && nums[begin] == target) {
            res.push_back(begin);
        } else {
            res.push_back(-1);
        }
        //finding last index
        begin = 0, end = size - 1;
        while(begin <= end) {
            int mid = begin + ((end - begin) >> 1);
            if(nums[mid] <= target) {
                begin = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        if(end >= 0 && nums[end] == target) {
            res.push_back(end);
        } else {
            res.push_back(-1);
        }
        return res;
    }
