var twoSum = function (nums, target) {
    let res = [];
    const map = new Map();

    for (let i = 0; i < nums.length; i++) {
        if (map.has(target - nums[i])) {
            res[0] = map.get(target - nums[i]);
            res[1] = i;
        }

        map.set(nums[i], i);
    };

    return res;
}

console.log(twoSum([0, 4, 3, 0], 0));


