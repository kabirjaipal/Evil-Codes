// an array is a built-in data structure that is used to store a collection of values. It can store values of any type, including numbers, strings, objects, and even other arrays.

// creating an array with some values
let myArray = [10, 20, 30, 40, 50];

// accessing values in an array
console.log(myArray[0]); // prints 10
console.log(myArray[3]); // prints 40

// changing values in an array
myArray[2] = 35;
console.log(myArray); // prints [10, 20, 35, 40, 50]

// adding values to an array
myArray.push(60);
console.log(myArray); // prints [10, 20, 35, 40, 50, 60]

// removing values from an array
myArray.pop();
console.log(myArray); // prints [10, 20, 35, 40, 50]

// getting the length of an array
console.log(myArray.length); // prints 5

// iterating over an array
for (let i = 0; i < myArray.length; i++) {
  console.log(myArray[i]);
}
