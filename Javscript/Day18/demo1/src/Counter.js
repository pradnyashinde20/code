import { useState } from "react";
import Counter1 from "./Counter1";
import Counter2 from "./Counter2";
import errorBoundry from "./errorboundry";

const Counter =()=>{
    const [count1,setCount1]=useState(1);
    const increment1 =()=>{
        setCount1(count1+1);
    }

    const [count2,setCount2]=useState(1);
    const increment2 =()=>{
        setCount2(count2 + 1);
    }

    return(
        <>
        <errorBoundry>
         <Counter1 value={count1}
          onClick={increment1}>
        </Counter1>
        </errorBoundry>

       <Counter2 value={count2}
        onClick={increment2}>
       </Counter2>

       </>
    )
}
export default Counter;