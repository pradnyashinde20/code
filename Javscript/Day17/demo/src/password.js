import { useState } from "react"
export default function Passwordgenerator(){
let [length,setlength]=useState(8);
let [password,setpassword]=useState("");
let generatepassword=(len)=>{
let chars= 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+~`|}{[]:;?><,./-=';
let pass=' ';
for(let i=0;i<=len;i++)
{
    pass+=chars.charAt(Math.floor(Math.random()*chars.length));
}

return pass;
    }
function handler(e){
let newlength=Number(e.target.value);
setlength(newlength);
setpassword(generatepassword(newlength));
}
    
return(
    <>
    <input type="number" value={length} onChange={handler}/>
    <p>generate password:{password}</p>
    </>
)
    }