let a=require('express');
let u=require("./MOCK_DATA.json")
const port=8080;
const exp=a();
exp.get('/user',(req,res)=>
{
    res.set('Content-Type','application/json');
    res.json(u);
});
exp.get('/user/:id',(req,res)=>
{
    res.set('Content-Type','application/json');
    let id=Number(req.params.id);
    let user=u.find(user=>user.id==id);
    res.json(user);
});
exp.listen(port,()=>
{
    console.log("server start");
})