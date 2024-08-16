let arr = [10, 40, 35, 47, 68, 22, 40, 10, 98, 10, 50, 35, 68, 40, 10];
let counterObj = new Object();

const dupElementsArr = new Array();

for (let i = 0; i < arr.length; i++) {
  let elem = arr[i];
  if (elem in counterObj) {
    counterObj[elem] = counterObj[elem] + 1;
  } else {
    counterObj[elem] = 1;
  }
}

let num,
  counter = 0;

for (let key in counterObj) {
  key = String(key);
  console.log(counterObj[key]);

  if (counterObj[key] > counter) {
    counter = counterObj[key];
  }

  if (counterObj[key] === counter) {
    num = Number(key);
  }
  dupElementsArr.push(Number(key));

}
console.log(counterObj);
console.log("Duplicate elements array: ", dupElementsArr);
console.log("No of duplicate elements: ", dupElementsArr.length);

console.log("Number with maximum occurrences: ", num);