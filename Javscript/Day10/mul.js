const { error } = require("console");
const { resolve } = require("path");

const args = process.argv.slice(2);
const num1 = parseInt(args[0]);
const num2 = parseInt(args[1]);

function mulposnum(a,b){
    return new Promise((resolve,reject)=>{
        if(a>0 && b>0){
            resolve( a*b);
        }else{
            reject( "both the numbers can be positive numbers");
        }
    })
}
mulposnum(num1,num2)
.then(result=>{
    console.log("multiplcation result : "+result);
})
.catch(error=>{
console.log("error:"+error);
})
