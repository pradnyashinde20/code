const express =require('express');
const users = require('./MOCK_DATA.json');
const port = 3000;
const app = express();

app.get('/',(req,res)=>{
    res.send("hello..");
});
app.get('/users',(req,res)=>{
    res.json(users);
});

app.listen(port,()=>{
    console.log("from start script");
});