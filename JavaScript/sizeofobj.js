const exampleObject = {
  name: "Kabir",
  age: 18,
  address: {
    street: "123 Main St",
    city: "Anytown",
    state: "CA",
    zip: "12345",
  },
  phone: 9876543210,
  email: "kabir@example.com",
  dateOfBirth: "06/04/2004",
  height: 178, // cm
  weight: 70, // kg
  occupation: "student",
  interests: ["coding", "reading", "music"],
};

function getObjectSize(obj) {
  // Convert the object to a JSON string
  const jsonString = JSON.stringify(obj);

  // Get the length of the JSON string in bytes
  const objectSizeInBytes = Buffer.byteLength(jsonString);

  return objectSizeInBytes;
}

console.log(`The size of the object is ${getObjectSize(exampleObject)} bytes.`);
