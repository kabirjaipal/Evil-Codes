// A Graph is a non-linear data structure that consists of a set of vertices and a set of edges that connect those vertices.

class Graph {
  constructor() {
    this.vertices = [];
    this.edges = new Map();
  }

  addVertex(vertex) {
    this.vertices.push(vertex);
    this.edges.set(vertex, []);
  }

  addEdge(vertex1, vertex2) {
    this.edges.get(vertex1).push(vertex2);
    this.edges.get(vertex2).push(vertex1);
  }

  getNeighbors(vertex) {
    return this.edges.get(vertex);
  }

  depthFirstTraversal(startVertex, visited = new Set()) {
    visited.add(startVertex);
    console.log(startVertex);

    const neighbors = this.edges.get(startVertex);
    for (const neighbor of neighbors) {
      if (!visited.has(neighbor)) {
        this.depthFirstTraversal(neighbor, visited);
      }
    }
  }

  breadthFirstTraversal(startVertex) {
    const visited = new Set();
    const queue = [startVertex];
    visited.add(startVertex);

    while (queue.length > 0) {
      const currentVertex = queue.shift();
      console.log(currentVertex);

      const neighbors = this.edges.get(currentVertex);
      for (const neighbor of neighbors) {
        if (!visited.has(neighbor)) {
          visited.add(neighbor);
          queue.push(neighbor);
        }
      }
    }
  }
}

// usage

const graph = new Graph();

graph.addVertex("A");
graph.addVertex("B");
graph.addVertex("C");
graph.addVertex("D");
graph.addVertex("E");

graph.addEdge("A", "B");
graph.addEdge("B", "C");
graph.addEdge("C", "D");
graph.addEdge("D", "E");
graph.addEdge("E", "A");

console.log(graph.getNeighbors("A")); // Output: [ 'B', 'E' ]
