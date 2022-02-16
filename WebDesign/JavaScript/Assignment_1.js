// Create a function that returns the total number of boomerangs in an array.

const findBoomerangs = (input) => {
  let outputArray = [];
  let count = 0;

  for (let i = 0; i < input.length; i++) {
    let dummy = [];
    if (input[i] == input[i + 2] && input[i] != input[i + 1]) {
      count++;
      dummy.push(input[i], input[i + 1], input[i + 2]);
      outputArray.push(dummy)
      console.log(dummy);
    }
  }
  return outputArray;
};

let inputArray = [3, 7, 3, 7, 1, 5, 1, 2, 2, -2, 2];

let result = findBoomerangs(inputArray);
console.log(result);
