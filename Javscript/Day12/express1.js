const express = require('express');
const users = require('./MOCK_DATA.json');
const { parse } = require('path');
const port = 3000;
const app = express();


app.get('/emp',(req,res)=>{
    res.set('Content-Type', 'text/html');
    res.send(users);
});
app.get('/api/users',(req,res)=>{
    res.set('Content-Type','application/json');
    res.json(users);
});
app.get('/api/users/:id',(req,res)=>{
    res.set('Content-Type','application/json');
    const id = Number(req.params.id);
    const user = users.find(user => user.id===id);
    res.json(user);
});
app.get('/api/users1/:email',(req,res)=>{
    res.set('Content-Type','application/json');
    const email =req.params.email;
    const user= users.find(user => user.email===email);
    res.json(user);
});

app.delete('/api/users/:id',(req,res)=>{
    const id = Number(req.params.id);
    const user = users.findIndex(user=>user.id ===id);
    if(user===-1)
    
        return res.status(404).send("data not found");
    
        const item=users.splice(user,1);
        return res.json("deleted");
    

});
app.put('/api/users/:id',(req,res)=>{
    
    
})

app.listen(port,()=>{
    console.log("the server is running on port : "+port);
})