var intersect = function (nums1, nums2) {
    let map = new Map();
    let res = [];

    for (let i of nums1) {
        if (typeof map.get(i) == 'undefined') {
            map.set(i, 1);
        } else {
            map.set(i, map.get(i) + 1);
        }
    }

    for (let i of nums2) {
        if (map.get(i) > 0) {
            res.push(i);
            map.set(i, map.get(i) - 1);
        }
    }

    return res;
};

console.log(intersect([1, 2, 2, 1], [2, 2]))