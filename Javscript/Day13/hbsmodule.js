import express from 'express'
let app=express();
import path from 'path'
app.set('views','./views')
app.set('view engine','hbs')
app.listen(3000)
app.get("/calc",(req,res)=>
{
    res.render("calc");
})
import bodyParser from 'body-parser';
app.use(bodyParser.urlencoded({extended:true}))
app.post("/docalculation",(req,res)=>
{
    let n1=req.body.num1;
    let n2=req.body.num2;
    let sum=parseInt(n1)+parseInt(n2);
    res.render("calc",{result:sum})
})