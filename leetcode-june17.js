var nums = [2, 1, 4, 3];
var left=2, right=3;



var numSubarrayBoundedMax = function(nums, left, right) {
    var n = nums.length;
    var bucket1=0, bucket2=0, count=0;
    for(var i=0;i<n;i++) {
        nums[i]<left?count-=(++bucket1):bucket1=0;
        nums[i]<=right?count+=(++bucket2):bucket2=0;
    }
    return count;
};

console.log(numSubarrayBoundedMax(nums, left, right));