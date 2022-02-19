//Create a function which counts how many lone 1s appear in a given number.
// Lone means the number doesn't appear twice or more in a row

const countLoneOnes = (input) => {
  let count = 0;
  let inputInString = input.toString();

  if (inputInString[0] == 1 && inputInString[1] != inputInString[0]) {
    count++;
  }

  for (let i = 1; i < inputInString.length; i++) {
    if (
      inputInString[i] == 1 &&
      inputInString[i] != inputInString[i + 1] &&
      inputInString[i] != inputInString[i - 1]
    ) {
      count++;
    }
  }
  return count;
};

let inputNumber = 101010101;

console.log(`countLoneOnes(${inputNumber}) ==> ` + countLoneOnes(inputNumber));
