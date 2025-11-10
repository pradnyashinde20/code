let a=require('http')
let port=8080;
let s=a.createServer((req,res)=>
{
    res.writeHead(200,{'content-type':'text/html'});
    res.end("<h1>successfully run</h1>");
})
s.listen(port,()=>{
console.log("your program run on"+port+" port no");
});
