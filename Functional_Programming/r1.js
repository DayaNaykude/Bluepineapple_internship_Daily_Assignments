const _l = (msg) => console.log("Output ==> [" + msg + "]");

const strings = ["alpha", "beta", "gamma", "delta", "epsilon"];
const vowels = ["a", "e", "i", "o", "u"];
let item_count = 0;
for (let i = 0; i < strings.length; i++) {
  let start_char = strings[i].charAt(0);
  _l('start char for [' + strings[i] + '] is '  + start_char);
  _l('Does vowels include start_char? ' + vowels.includes(start_char));
  if (vowels.includes(start_char)) item_count++;
}
_l(item_count);
