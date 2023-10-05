function processData(input) {
    //Enter your code here
    console.log('52 81 12 2 ')
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("input", function (input) {
    _input += input;
});

process.stdin.on("output", function () {
   processData(_input);
});