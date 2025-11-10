import { useEffect, useRef, useState } from "react"
export default function UseRef(){
    let x=useRef();
    let z=useRef();
    let y =100;
    let [s1,setS1]=useState("");

    useEffect(()=>{
        x.current=20;
    },[])


    return (
        <div>
            <input type="text" onChange={(e)=>{
                x.current++;
                y++;
                setS1(e.target.value);
            }}></input>
            <p>x={x.current} y={y}</p>

            <input type="text" ref={z} onChange={()=>console.log("here",z.current.value)}/>
            <p>the value in input tag={z.current?.value}</p>
        </div>
    )
}