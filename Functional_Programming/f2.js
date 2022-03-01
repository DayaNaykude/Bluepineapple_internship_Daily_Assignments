// --------- BOILERPLATE -----------------------------------------------------
const _l = (msg) => console.log("Output ==> [" + msg + "]");
// --------- BOILERPLATE -----------------------------------------------------

//syntax
/*
function fact(m, n){
  //function body
}

const fact = function(m, n){
  //function body
}

const fact = (m, n) => {
  //function body
}
*/
//has no memoization
//classic factorial in loop
const fact = (n) => {
  let i = n;
  let f = 1;
  while (i > 0) {
    f = f * i;
    i = i - 1;
  }
  return f;
}; //modifies I, f etc

_l(fact(5));

_l(fact(6));
