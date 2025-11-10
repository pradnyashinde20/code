let f=require('fs');

let d="hello";
f.writeFile('shiv.txt',d,(error)=>
{
    console.log(error);
});
