

const express = require('express');
const users = require('./MOCK_DATA.json');
const p = require('path');
const f = require('fs');
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
app.use(express.urlencoded({extended : false}));
app.post('/api/users/add',(req,res)=>{
    const data= req.body;
    console.log(data.email);
    users.push({...data, id:users.length+1});

    f.writeFile('./MOCK_DATA.json',JSON.stringify(users),(err)=>{
        console.log(err);
        res.send("data added successfully!!");
    });
   
  });
app.use(express.urlencoded({extended : true}));
    app.put('api/users2/:id',(req,res)=>{
        const id = Number(req.params.id);
        const data = req.body;
        const userindex = users.findIndex(user=>user.id===id);
        userindex.data==data;
       /* if(userindex=== -1){
            return res.status(404).send("user not found");
        }
       users.splice(userindex , 1 ,{...data,id:id});

      f.writeFile('./MOCK_DATA.json', JSON.stringify(users),(err)=>{
        if(err){
            res.send(err);
        }*/
       res.json(userindex);
        res.send("data updated successfully!!");

      })
    

app.get('/aboutus',(req,res)=>{
    const t = p.join(__dirname,'aboutus.html');
    console.log(t);
    res.sendFile(t);
})

app.listen(port,()=>{
    console.log("the server is running on port : "+port);
})