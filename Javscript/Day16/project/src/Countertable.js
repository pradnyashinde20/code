import { useEffect, useState } from "react";

export default function Countertable(){
    let [count,setCount]=useState(0);
    let [counter,setCounter]=useState(0)
    function Handler()
    {
        setCount(count+1);
        setCounter(counter+1);
    }
    useEffect(()=>{
        setTimeout(setCount(count),1000)

    },[]);
    return(
        <>
        <table border="1px"><th>counter</th><th>value</th>
        <tr><td>counter={counter}</td><td>value={count}</td></tr></table>
        <button onClick={Handler}>display</button>
        </>
    )

}