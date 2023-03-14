// A Linked List is a linear data structure that consists of a sequence of nodes, where each node contains a value and a reference to the next node in the sequence

class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
    this.length = 0;
  }

  // add a node to the end of the list
  append(value) {
    const newNode = new Node(value);
    if (!this.head) {
      this.head = newNode;
      this.tail = this.head;
    } else {
      this.tail.next = newNode;
      this.tail = newNode;
    }
    this.length++;
  }

  // add a node to the beginning of the list
  prepend(value) {
    const newNode = new Node(value);
    if (!this.head) {
      this.head = newNode;
      this.tail = this.head;
    } else {
      newNode.next = this.head;
      this.head = newNode;
    }
    this.length++;
  }

  // remove the first occurrence of a node with the specified value
  remove(value) {
    let currentNode = this.head;
    let previousNode = null;
    while (currentNode !== null) {
      if (currentNode.value === value) {
        if (previousNode === null) {
          this.head = currentNode.next;
        } else {
          previousNode.next = currentNode.next;
        }
        this.length--;
        return;
      }
      previousNode = currentNode;
      currentNode = currentNode.next;
    }
  }

  // get the node at the specified index
  getNodeAtIndex(index) {
    if (index < 0 || index >= this.length) {
      return null;
    }
    let currentNode = this.head;
    for (let i = 0; i < index; i++) {
      currentNode = currentNode.next;
    }
    return currentNode;
  }

  // print the values of all nodes in the list
  printList() {
    let currentNode = this.head;
    while (currentNode !== null) {
      console.log(currentNode.value);
      currentNode = currentNode.next;
    }
  }
}

// usage

const myList = new LinkedList();

myList.append(10);
myList.append(20);
myList.append(30);
myList.prepend(5);

console.log(myList.length); // Output: 4

myList.printList(); // Output: 5 10 20 30

myList.remove(20);

console.log(myList.length); // Output: 3

myList.printList(); // Output: 5 10 30

console.log(myList.getNodeAtIndex(2).value); // Output: 30
