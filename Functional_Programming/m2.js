// --------- BOILERPLATE -----------------------------------------------------
const _l = (msg) => console.log("Output ==> [" + msg + "]");
// --------- BOILERPLATE -----------------------------------------------------

//use map function to determine and print lengths of each element
const strings = ["alpha", "beta", "gamma", "delta", "epsilon"];

let lengths = strings.map(item => item.length);

_l(lengths);
