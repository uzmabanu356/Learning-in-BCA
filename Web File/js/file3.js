// Start with two numbers
let number1 = 10;
let number2 = 5;

console.log("Comparison Operators:");

// Check if the numbers are equal
console.log("Is number1 equal to number2? " + (number1 == number2)); // false

// Check if the numbers are NOT equal
console.log("Is number1 not equal to number2? " + (number1 != number2)); // true

// Check if number1 is greater than number2
console.log("Is number1 greater than number2? " + (number1 > number2)); // true

// Check if number1 is less than number2
console.log("Is number1 less than number2? " + (number1 < number2)); // false

// Check if number1 is greater than or equal to number2
console.log("Is number1 greater than or equal to number2? " + (number1 >= number2)); // true

// Check if number1 is less than or equal to number2
console.log("Is number1 less than or equal to number2? " + (number1 <= number2)); // false

// Strict equality (checks value and type)
let number3 = "10"; // This is a string
console.log("Is number1 strictly equal to number3? " + (number1 === number3)); // false

// Strict inequality (checks value and type)
console.log("Is number1 strictly not equal to number3? " + (number1 !== number3)); // true
