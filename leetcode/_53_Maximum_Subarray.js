var maxSubArray = function (nums) {
    console.log(nums.length);
    for (let i = 1; i < nums.length; i++) {
        if (nums[i - 1] > 0) {
            nums[i] += nums[i - 1];
        }
        console.log(i + " :" + nums[i])
    }

    return Math.max(...nums)
};

const nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4];
const res = maxSubArray(nums);
console.log(res)