class SelectionSort {
    selectionSort(array) {
        for (let i = 0; i < array.length - 1; i++) {
            let min = i;
            for (let j = i + 1; j < array.length; j++) {
                if (array[j] < array[min]) {
                    min = j;
                }
            }
            let temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }

    show(array) {
        console.log("Sorted array:");
        console.log(array.join(" "));
    }
}

const obj = new SelectionSort();
const arr = new Array(5); 

const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

console.log("Enter an array:");

rl.question('', (input) => 
{
    arr = input.split(' ').map(Number);
    obj.selectionSort(arr);
    obj.show(arr);
    rl.close();
});
