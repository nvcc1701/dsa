var merge = function (nums1, m, nums2, n) {
    let min = nums1[0];
    let srt = [];
    for (let i = 0; i < m + n; i++) {
        for (let j = i + 1; j < m; j++) {
            if (nums1[j] < nums1[i]) {
                let c = nums1[j];
                nums1[j] = nums1[i];
                nums1[i] = c;
            }

        }
    }

    console.log(nums1)
};

console.log(merge([11, 2, 3, 0, 0, 0], 3, [2, 5, 6], 3))