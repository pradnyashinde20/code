let str = ["shivam","raj","kunal","pritam"];
str.forEach((name)=>{
    console.log(name.toUpperCase(0,1));
});
let res =str.map((name1)=>
    name1.substring(0,3).toUpperCase()
)
res.forEach((name)=>{
    console.log(name);
});