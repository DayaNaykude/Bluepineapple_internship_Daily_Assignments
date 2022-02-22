//Given an array, write a function to calculate it's depth.
// Assume that a normal array has a depth of 1.

const calculateDepthOfArrayDepth = (inputArray) => {
  if (Array.isArray(inputArray)) {
    return 1 + Math.max(...inputArray.map(calculateDepthOfArrayDepth));
  } else {
    return 0;
  }
};

let input = [1, [2, [3, [4]]]];

console.log(calculateDepthOfArrayDepth(input));
