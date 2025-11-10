let arr =[];
arr.push(10);
arr.push(20);
arr.push(45);
arr.push(34);

console.log(arr);
let max =arr[0];
for(let i=1;i<arr.length;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
console.log("maximum element is : "+max);

