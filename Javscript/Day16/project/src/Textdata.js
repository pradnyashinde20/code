import { useState } from "react";

export default function Textdata()

{
let[data,setData]= useState(0)

function Handler(e)
{
    data=e.target.value;
    setData(data);
    
}
return(
    <>
    enter the text<input type="text"></input>
    <button onBlur={Handler}>display</button>
    <h2>value={data}</h2>
    </>
)
}