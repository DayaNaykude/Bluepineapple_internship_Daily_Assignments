//Create a function that takes an array of strings and returns an array
//with only the strings that have numbers in them. If there are no strings
//containing numbers, return an empty array.

function checkStringContainNumber(input) {
  for (let digit of input) {
    if (parseInt(digit) || digit == 0) {
      return true;
    }
  }
}
const getArrayWithNumberedStrings = (inputArray) => {
  let outputArray = inputArray.filter(checkStringContainNumber);
  return outputArray;
};

let inputArray = ["Da0ya", "Nayk54ude", "jdg"];

console.log(getArrayWithNumberedStrings(inputArray));
