// A Queue is a linear data structure that follows a First-In-First-Out (FIFO) approach

class Queue {
  constructor() {
    this.items = [];
  }

  // add an item to the end of the queue
  enqueue(item) {
    this.items.push(item);
  }

  // remove an item from the front of the queue
  dequeue() {
    if (this.isEmpty()) {
      return "Underflow";
    }
    return this.items.shift();
  }

  // get the front item of the queue without removing it
  peek() {
    if (this.isEmpty()) {
      return "No elements in Queue";
    }
    return this.items[0];
  }

  // check if the queue is empty
  isEmpty() {
    return this.items.length == 0;
  }

  // get the size of the queue
  size() {
    return this.items.length;
  }

  // print the elements of the queue
  print() {
    let str = "";
    for (let i = 0; i < this.items.length; i++) {
      str += this.items[i] + " ";
    }
    return str;
  }
}

// usage

const queue = new Queue();

console.log(queue.isEmpty()); // Output: true

queue.enqueue(10);
queue.enqueue(20);
queue.enqueue(30);

console.log(queue.print()); // Output: 10 20 30

console.log(queue.size()); // Output: 3

console.log(queue.peek()); // Output: 10

console.log(queue.dequeue()); // Output: 10

console.log(queue.print()); // Output: 20 30
