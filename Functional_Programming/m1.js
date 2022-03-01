// --------- BOILERPLATE -----------------------------------------------------
const _l = (msg) => console.log("Output ==> [" + msg + "]");
// --------- BOILERPLATE -----------------------------------------------------

//classic way of iterating and printing lengths of each
const strings = ["alpha", "beta", "gamma", "delta", "epsilon"];
let lengths = [];

for (let i = 0; i < strings.length; i++) {
  lengths.push(strings[i].length);
}

_l(lengths);
const func = (input) => {
    return input.length;
  };

function _mapClone(arr, func) {
  let arrResponses = [];
  for (let i = 0; i < arr.length; i++) {
    let evaluatedRes = func(arr[i]);
    arrResponses.push(evaluatedRes);
  }
  return arrResponses;
}

let result = _mapClone(strings, func);
console.log(result);



let ret = strings.map(func);
_l(ret);
