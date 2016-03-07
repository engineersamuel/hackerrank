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

function main() {
    var n = parseInt(readLine());
    arr = readLine().split(' ');
    arr = arr.map(Number);
    
    var done = false;
    while (!done) {
        var count = 0;
        var cutSize = 10001;
        for (var i = 0; i < n; i++) {
            if (arr[i] > 0) {
                count += 1;
                cutSize = Math.min(cutSize, arr[i]);
            }
        }
        
        if (count === 0 || cutSize === 0) {
            break;
        }
        
        console.log(count);
        
        for (var j = 0; j < n; j++) {
            arr[j] -= cutSize;
        }
    }
}
