const _l = (msg) => console.log("Output ==> [" + msg + "]");

const strings = ["alpha", "beta", "gamma", "delta", "epsilon"];
const vowels = ["a", "e", "i", "o", "u"];

//if start char is vowel or d, count it
//if start char is a dont count it
/*
function ret1(ch){
  //call mandar's library here
  if(ch == 'a')
  return 1;
  else return 0;
}

function ret0(ch){
  if(ch == 'd') return 1
  else return 0;
}
*/

let item_count = strings.reduce(
  (acc, item) => acc + (vowels.includes(item.charAt(0)) ? 1 : 0),
  0
);

_l(item_count);
