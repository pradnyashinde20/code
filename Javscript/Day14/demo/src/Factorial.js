export default function Factorial(props)
{
 let num = parseFloat(props.num1);
 let fact =1;
  for(let i=1;i<=num;i++){
    fact = fact*i;
  }
  return(
  <>
   <div style={{backgroundColor: 'lightblue'}}>
  <h1>Factorial of num {num} is {fact}</h1>
  </div>
  </>
  )
}