// const f=require('fs');
// f.readFile("abc.txt","utf8",(error,data)=>{
//     if(error)
//     {
//         console.log("error occured")
//     }
//     else{
//         console.log(data);
//     }
// })
// f.readFileAsync()

const f = require('fs');

// binary   synchrouns   internal Working 
f.readFile("shiv.txt", "utf8", (err, data) => {
    if (err) {
        console.log("error occured " + err)
    } else
        console.log(data);
})
