// A Stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle, which means that the last element added to the stack will be the first one to be removed

class Stack {
  constructor() {
    this.items = [];
  }

  // add an item to the top of the stack
  push(item) {
    this.items.push(item);
  }

  // remove and return the top item from the stack
  pop() {
    if (this.isEmpty()) {
      return null;
    }
    return this.items.pop();
  }

  // return the top item from the stack without removing it
  peek() {
    if (this.isEmpty()) {
      return null;
    }
    return this.items[this.items.length - 1];
  }

  // return true if the stack is empty, false otherwise
  isEmpty() {
    return this.items.length === 0;
  }

  // return the number of items in the stack
  size() {
    return this.items.length;
  }

  // print the contents of the stack
  print() {
    console.log(this.items);
  }
}

// usage

const myStack = new Stack();

myStack.push(10);
myStack.push(20);
myStack.push(30);
myStack.print(); // Output: [10, 20, 30]

console.log(myStack.pop()); // Output: 30
console.log(myStack.peek()); // Output: 20

myStack.print(); // Output: [10, 20]
console.log(myStack.size()); // Output: 2
console.log(myStack.isEmpty()); // Output: false
