import { useState } from "react";

 export default function Counter(){
    let[count,setCount]=useState(0)
   function Handler(){
        setCount(count+1);

    }
return(
    
        <>
<h1>counter ={count}</h1>
<button onClick={Handler}>click</button>
        </>

    
)

}