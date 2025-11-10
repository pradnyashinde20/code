let a=require("http")
a.createServer((req,res)=>{
    console.log("method"+req.method);
    if(req.method=="GET")
    {
        res.write("get method");
    }
    if(req.method=="POST")
    {
        res.write("this is post method");
    }
})
.listen(8080,()=>
{
console.log("server start")
})