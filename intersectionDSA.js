// Code example
const arr1 = [1, 2, 3, 4 ];
const arr2 = [1, 2, 0, 6];
const arr3 = [];

for (i in arr1) {
    for (j in arr2) {
        if (arr1[i] === arr2[j]){
            arr3.push(arr1[i])
        }
    }
}
console.log(arr3)
