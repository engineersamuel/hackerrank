
ss.stdin.resume();
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
    var s = readLine();
    var k = parseInt(readLine());
    
    var split = s.split("");
    for (var i = 0; i < split.length; i++) {
        if (/[a-zA-Z]/.test(split[i])) {
            var base = split[i] == split[i].toLowerCase() ? "a".charCodeAt(0) : "A".charCodeAt(0);
            split[i] = String.fromCharCode(base + (split[i].charCodeAt(0) - base + k) % 26);
        }
    }
    console.log(split.join(""));
}
