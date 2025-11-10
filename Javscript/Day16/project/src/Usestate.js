import { useEffect, useState } from "react";

export default function Usestate(){
    let [count,setCount]=useState(0);
    
    
    useEffect(()=>{
        setTimeout(setCount(count+1),1000)
    },[]);
function Handler(){
    setCount(count+1);
}
    return(
        
          <div>
            counter={count}<br></br>
            <button onClick={Handler}>click me</button>
            </div>
        
    )
}