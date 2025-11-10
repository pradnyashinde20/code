import { useState } from "react";

export default function Form()
{
let[name,setname]=useState('');
let[lname,setlname]=useState('');
handler(e)
{
    setname(e.target.value);
    setlname(e.target.value);
}
return(
    <>
    enter your name:
    <input type="text" value={name} ></input><br>
    </br>
    <input type="text" value={lname}></input><br>
    </br>
    <input type="submit" onClick={handle}>submit</input>
    </>
)

}