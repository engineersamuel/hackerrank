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
    processData();    
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////
function processData() {
    var t = parseInt(readLine());
    for(var a0 = 0; a0 < t; a0++){
        var n_temp = readLine().split(' ');
        var begin = parseInt(n_temp[0]);
        var end = parseInt(n_temp[1]);
        var beginCeil = Math.ceil(Math.sqrt(begin));
        var endFloor = Math.floor(Math.sqrt(end));
        console.log(endFloor - beginCeil + 1);
    }
}
