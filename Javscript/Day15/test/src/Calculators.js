 export default function Calculators(num1,num2)
    {
        let a=parseInt(num1);
        let b=parseInt(num2);
        return(
            <>
            <h1>addition is=({a}+{b})</h1>
            <h1>substraction is={a}-{b}</h1>
            <h1>multiplication is={a}*{b}</h1>
            <h1>division is={a}/{b}</h1>
            <h1>modulus is={a}%{b}</h1>
            </>
        )
    }