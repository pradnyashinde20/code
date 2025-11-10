import express from 'express';
const  app = express();
import path from 'path';
app.listen(4000);
app.set('views','./views');
app.set('view engine','hbs');

app.get('/table', (req,res)=>{
    res.render('mathstable');
});
import bodyParser  from 'body-parser';
app.use(bodyParser.urlencoded({extended:true}));
app.post('/generate-table',(req,res)=>{
    let n1 = parseInt(req.body.num1);
    let rowdata = [];
    if(!isNaN(n1)&& n1>0){
        for(let i=1;i<=10;i++){
           rowdata[i]=`${n1}* ${i}=${n1*i}`;
        }
    }
    res.render('mathstable',{rowdata:rowdata});
})