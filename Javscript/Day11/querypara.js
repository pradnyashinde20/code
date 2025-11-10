let h=require('http');
let u = require('url');
let s = h.createServer(function(req,res){
    let d = req.url;
    let d1 = u.parse(d,true).query;
    res.writeHead(200,('content-type','text/plain'));
    console.log(req.headers);
    if(d1.name == "shivam"&& d1.lname =="parve"){
        res.write("<h1>"+d1.name+d1.lname+"</h1>");

    }else{
        res.write(JSON.stringify({message :"hello"}));
        res.end();
    }
    

});

s.listen(3000);