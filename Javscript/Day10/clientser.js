
let http=require('http');
let serv=http.createServer((req,res)=>
{
res.writeHead(200,{'content-type':'text/plain'});
res.end("welcome to node js");
})
serv.listen(8080);
