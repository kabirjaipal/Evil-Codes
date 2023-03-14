// a string is a sequence of characters that are enclosed in quotes (either single quotes or double quotes). Strings are immutable, which means that once they are created, their values cannot be changed

// creating a string
let myString = "Hello, world!";

// accessing characters in a string
console.log(myString[0]); // prints 'H'
console.log(myString[7]); // prints 'w'

// getting the length of a string
console.log(myString.length); // prints 13

// concatenating strings
let anotherString = " How are you?";
let concatenatedString = myString + anotherString;
console.log(concatenatedString); // prints "Hello, world! How are you?"

// converting a string to uppercase or lowercase
console.log(myString.toUpperCase()); // prints "HELLO, WORLD!"
console.log(myString.toLowerCase()); // prints "hello, world!"

// finding the position of a substring in a string
console.log(myString.indexOf("world")); // prints 7

// extracting a substring from a string
console.log(myString.slice(7, 12)); // prints "world"

// replacing a substring in a string
console.log(myString.replace("world", "everyone")); // prints "Hello, everyone!"
