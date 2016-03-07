process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();    
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////

function toArr(num) {
    arr = [];
    while (num !== 0) {
        arr.push(parseInt(num % 10));
        num = parseInt(num / 10);
    }
    arr.reverse();
    return arr;
}

function main() {
    var t = parseInt(readLine());
    for(var a0 = 0; a0 < t; a0++){
        var n = parseInt(readLine());
        var arr = toArr(n);
        var numDiv = 0;
        for (var i = 0; i < arr.length; i++) {
            if ((arr[i] !== 0) && (n % arr[i] === 0)) {
                numDiv += 1;
            }
        }
        console.log(numDiv);
    }

}
