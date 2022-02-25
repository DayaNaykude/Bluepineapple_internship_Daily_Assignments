// In JavaScript ES6 an arrow function expression is a syntactically compact
//alternative to a regular function expression. Create a function that takes a
//string representing a function and converts between an arrow function and a regular
// function.
//- If the input is a regular function, return an equivalent arrow function.
//- If the input is an arrow function, return an equivalent regular function.

const isArrowFunction = (input) => {
  if (input.search("()=>") != -1) {
    return true;
  }
  return false;
};

const converts = (inputFunction) => {
  if (isArrowFunction(inputFunction)) {
    let output = inputFunction.replace("=>", "").replace("=", "");
    return "function " + output;
  } else {
    let output = inputFunction.replace("function ", "");
    let functionName = output.substring(0, output.indexOf("("));

    let result = output.replace(functionName, "");
    const finalResult =
      functionName +
      "=" +
      result.slice(0, result.indexOf(")") + 1) +
      "=>" +
      result.slice(result.indexOf(")") + 1);
    return finalResult;
  }
};

let arrow = "sum=(x,y,z)=>{return(x+y+z)}";
let normal = "function sum(x,y,z){return(x+y+z)}";

let input = normal;

console.log("input: ", input);
let output = converts(input);
console.log("output: ", output);
