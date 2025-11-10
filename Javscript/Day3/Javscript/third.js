// let arr = new Array(10);
// for(let i=0;i<arr.length;i++){
//     arr[i]=i+10;
// }
// console.log(arr);

let arr = [10,56,75,34];
arr.push(34);
arr.unshift(11);
console.log(arr);

arr.forEach(element=>{
    console.log(element);
})

arr.pop()
console.log(arr);

arr.splice(2,1);
console.log(arr);


let sqaure=arr.map((e)=>e*e);
console.log(sqaure);

let oddNum = arr.filter((e)=>{
    return e%2!=0;
})
console.log(oddNum);

arr.sort((a,b)=> a-b); // asecending sort
console.log(arr);
arr.sort((a,b)=> b-a); // decending sort
console.log(arr);