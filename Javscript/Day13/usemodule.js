const bodyParser = require('body-parser');
const express=require('express')
const users = require('./MOCK_DATA.json');
const f=require("fs")
const app=express();
app.get('/user',(req,res)=>
{
    res.set('Content-Type','application/json');
    res.json(users)
});
app.use(express.urlencoded({extended:true}))
app.post('/about',(req,res)=>
{
let data=req.body;
console.log("data"+data.email);
user1.push({data,id : user1.length+1});
f.writeFile('./MOCK_DATA.json',JSON.stringify(user1),(err)=>{
    console.log("error");
}
)
})