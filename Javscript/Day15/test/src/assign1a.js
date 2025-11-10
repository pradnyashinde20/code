import { useState } from "react";
export default function Factorial1()
{
 let num = 10;
  let fact =1;

 const [data,change]=useState(0);
 const [fact1,change2]=useState(0);


 function inputhandler(event){
    num = event.target.value;
    console.log("you enterd value"+num);
 }

 
 function btnhandler(){
    change(num);
    

    
     for(let i=1;i<=num;i++){
       fact = fact*i;
      
        change2(fact);
  }
 }


  return(
  <>

  Enter Number :
  <input type="Number" onBlur={inputhandler}/>

  <button type="submit" onClick={btnhandler}>Find Fcatorial</button>
  <div style={{backgroundColor: 'lightblue'}}>
        <h1>Factorial of num {data} is {fact1}</h1>
     </div>

  </>
  )
}