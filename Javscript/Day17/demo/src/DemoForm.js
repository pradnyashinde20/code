import { useState } from "react"

export default function DemoForm(){
const [fname, setName]=useState("Default");

function validate(e){
    e.preventDefault();
    alert(fname);
}
function readData(e){
    setName(e.target.value);
}

    return(
        <div>
        <form onSubmit={validate}>
         Enter First Name:
         <input type="text"name="fname" onChange={readData}/><br/>
         <input type="submit"/>
        </form>
        </div>
    )
}