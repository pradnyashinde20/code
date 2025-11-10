import { useEffect, useState } from "react";

export default function Counter1(){

     let [data,shiv]=useState(0);


     useEffect(()=>{
        console.log("in use effect");
      setTimeout(() => {
        shiv(data+1)
      }, 1000);

     },[])

     function handler(){
       shiv(data+1);
     }

     return(
        <>

        <h1>Counter : {data}</h1>
        <button onClick={handler}>Click Me</button>
        </>
     )
}