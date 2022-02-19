// Create a function that returns the total number of boomerangs in an array.

const findBoomerangs = (input) => {
  let outputArray = [];

  for (let i = 0; i < input.length; i++) {
    let dummy = [];
    if (input[i] == input[i + 2] && input[i] != input[i + 1]) {
      dummy.push(input[i], input[i + 1], input[i + 2]);
      outputArray.push(dummy);
    }
  }
  return outputArray;
};

let inputArray = [3, 7, 3, 2, 1, 5, 1, 2, 9, -2, 2];

let result = findBoomerangs(inputArray);
if (result.length != 0) {
  console.log(
    result.length +
      " boomerangs in this sequence: " +
      result.map((object) => {
        return "[" + object + "]";
      })
  );
} else {
  console.log("No boomerangs present !");
}
