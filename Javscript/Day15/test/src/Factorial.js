import { useState } from "react";

export default function Factorial()
{
     let [number,setNumber]=useState[0];
      const [factorialResult, setFactorialResult] = useState(null);
    let CalculatorFactorial=(num)=>
    {
      let fact=1;
        for(let i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
     let handleCalculation=()=>
     {
        setFactorialResult(CalculatorFactorial(number))
     }
     return(
        <>
        <input type="number" value={number}
        onChange={(e)=>setNumber(parseInt(e.target.value))}/>
            <button onClick={handleCalculation}>calculate</button>
            <p>
          Factorial of {number} is: <strong>{factorialResult}</strong>
        </p>
        </>
     )
    }
   