var maxProfit = function (prices) {
    max = 0;
    let i = 0, j = 1;

    while (j < prices.length) {
        if (prices[i] < prices[j]) {
            max = Math.max(max, prices[j] - prices[i]);
        } else {
            i = j;
        }
        j++;
    }

    return max;
};

console.log(maxProfit([7, 4, 5, 3, 1, 6]))