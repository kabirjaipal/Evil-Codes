/**
 * Checks if a given string is a palindrome.
 *
 * @param {string} str - The input string to be checked for palindrome.
 * @returns {boolean} - Returns true if the input string is a palindrome, otherwise false.
 */
function isPalindrome(str) {
  // Convert the first and last characters to lowercase for case-insensitive comparison
  return str[0].toLowerCase() === str[str.length - 1].toLowerCase();
}

// Example usage
const exampleStr = "Eye";
console.log(isPalindrome(exampleStr));
