// A Tree is a non-linear data structure that consists of nodes connected by edges, where each node can have any number of child nodes

class TreeNode {
  constructor(value) {
    this.value = value;
    this.children = [];
  }

  addChild(childNode) {
    this.children.push(childNode);
  }

  removeChild(childNode) {
    const index = this.children.indexOf(childNode);
    if (index !== -1) {
      this.children.splice(index, 1);
    }
  }

  traverseDF(callback) {
    callback(this);
    this.children.forEach((child) => child.traverseDF(callback));
  }

  traverseBF(callback) {
    let queue = [this];
    while (queue.length > 0) {
      const node = queue.shift();
      callback(node);
      queue = queue.concat(node.children);
    }
  }
}

// usage

const root = new TreeNode("root");

const child1 = new TreeNode("child1");
const child2 = new TreeNode("child2");

root.addChild(child1);
root.addChild(child2);

const grandchild1 = new TreeNode("grandchild1");
const grandchild2 = new TreeNode("grandchild2");

child1.addChild(grandchild1);
child2.addChild(grandchild2);

console.log(root); // Output: TreeNode { value: 'root', children: [ TreeNode { value: 'child1', children: [Array] }, TreeNode { value: 'child2', children: [Array] } ] }
