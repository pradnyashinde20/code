
function largestNumber(arr){
    let larNum = arr[0];
    for(let i=0;i<arr.length;i++){
        if(arr[i]>larNum){
            larNum=arr[i];
        }
    }
    return larNum;
}
let arr=[23,23,54,62,234,46,345,435,34];
let res = largestNumber(arr);
console.log("largest number of array is :"+res);