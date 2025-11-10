let p=require('path')
let fs=require('fs')
console.log("name"+ __dirname);
const db={properties:'configproperties'};
let config=p.join(__dirname,'config',db.properties);

fs.readFile(config, 'utf-8',(err,data)=>{
    if(err){
        console.log("error occured");
    }else{
        console.log(data);
    }
    console.log("name"+ __filename);
});
