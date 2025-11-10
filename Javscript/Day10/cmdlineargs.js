const args = process.argv.slice(2);
let arr=[];
for(let i=0;i<10;i++){
    arr[i]=parseInt(args[i]);
}
console.log(arr);
 let add=0;
for(let i=0;i<10;i++){
   
    if(arr[i]%2==0){
        add+=arr[i];
    }
    
}
console.log("addition of even numbers "+add);

let add2=0;
for(let i=0;i<10;i++){
   
    if(i%2==0){
        add2+=arr[i];
    }
    
}
console.log("addition of even numbers at even index "+add2);


let add3=0;
for(let i=0;i<10;i++){
   
    if(arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%4!=0 && arr[i]%5!=0 && arr[i]%6!=0
         && arr[i]%7!=0  && arr[i]%8!=0  && arr[i]%9!=0
    ){
        console.log(arr[i]);
        add3+=arr[i];
    }
    
}
console.log("addition of prime numbers "+add3);