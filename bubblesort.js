const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let array = [];

rl.question('Enter your array: ', (input) => 
{
    array = input.split(' ').map(Number);

    for(let i = 0; i < array.length - 1; i++) 
    {
        for(let j = 0; j < array.length - i - 1; j++) 
        {
            if(array[j] > array[j + 1]) 
            {
                let temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    console.log('Sorted array is: ' + array.join(' '));

    rl.close();
});
