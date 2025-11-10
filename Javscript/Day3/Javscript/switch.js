let arr =[10,4,23,543,53,233,44,565,343,545,5];

let choice = prompt(
    `enter your choice :
    1. push
    2. unshift
    3. shift
    4. pop
    5. sort
    6.splice
    7.slice
    8. display array elements`

    
);
switch(parseInt(choice)){
 case 1:
    let a=prompt(`enter element to add last`);
    arr.push(a);
    break;

case 2:
    let b = prompt(`enter element to add fisrt`);
    arr.unshift(b);
    break
case 3:
    arr.shift(c);
    break;

case 4 :
     console.log(`delete last element`);
     arr.pop();
     break;

case 5:
    console.log("sorted in ascending order");
    arr.sort();
    console.log(arr);
    console.log("sorted in descending order");
    arr.sort((a,b)=>b-a);
    console.log(arr);
    break;

case 6:
    arr.splice(2,1);
    break;

case 7:
    arr.slice(2,4);
    break;

case 8:
    arr.forEach((ele)=>{
        console.log(ele);
    });
default :
alert("invalid choice !!!")
};