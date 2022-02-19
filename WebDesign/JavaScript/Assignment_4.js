//Create a function that takes one, two or more numbers as arguments and adds
// them together to get a new number. The function then repeatedly multiplies
// the digits of the new number by each other, yielding a new number, until the
//product is only 1 digit long. Return the final product.

const getOneDigitNumber = (inputNumber) => {
  let productOfDigits = 1;
  if (inputNumber < 10 && inputNumber > -10) {
    return inputNumber;
  } else {
    while (inputNumber) {
      productOfDigits *= inputNumber % 10;
      inputNumber = Math.floor(inputNumber / 10);
    }
  }

  return getOneDigitNumber(productOfDigits);
};

const sumOfInputNumbers = (...inputs) => {
  let newNumber = 0;
  for (let input of inputs) {
    newNumber += input;
  }
  let output = getOneDigitNumber(newNumber);

  return output;
};

console.log(sumOfInputNumbers(1, 2, 5, 18));
