/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function (numRows) {
    var res = []

    for (let i = 0; i < numRows; i++) {
        res[i] = [];
        res[i][0] = 1;

        for (let j = 1; j < i; j++) {
            res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
        }
        res[i][i] = 1;
    }

    console.log(res)
};

console.log(generate(5))