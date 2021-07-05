var ar=[];
var n = Number(prompt("Enter N:"));
var t;
for(var i=0;i<n;i++)
{
    ar[i] = {index: i, val: Number(prompt("Enter " + i + "th number:"))};

}
var target = Number(prompt("Enter target:"));
/* var twoSum = function(nums, target) {
    var n = nums.length;
    for(var i = 0; i<n-1; i++)
    {
        for(var j= i+1; j<n; j++)
        {
            if(nums[i]+nums[j]==target)
                return [i,j];
        }
    }
}; */

var twoSum = function(nums, target) {
    let map = new Map();
    let n = nums.length;
    nums.sort(function(o1, o2) {
        return o1.val - o2.val;
    });

    console.log(nums);

    var i=0, j= n-1;
    while(i<j)
    {
        if(ar[i].val + ar[j]. val == target)
            return [ar[i].index, ar[j].index];

        if(ar[i].val + ar[j]. val > target)
            j--;
        else
            i++;
    }
};

var res=twoSum(ar, target);
console.log(res);

