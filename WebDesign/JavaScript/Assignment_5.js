//Given an array, write a function to calculate it's depth.
// Assume that a normal array has a depth of 1.

const calculateDepthOfArray = (inputArray) => {
  if (Array.isArray(inputArray)) {
    return 1 + Math.max(...inputArray.map(calculateDepthOfArray));
  } else {
    return 0;
  }
};

let input = [1, [2, [3, [4]]]];

console.log(calculateDepthOfArray(input));
