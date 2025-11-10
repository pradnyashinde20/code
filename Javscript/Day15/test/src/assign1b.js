import { useState } from "react";
export default function Calculate()
{
 let num1 = 10;
 let num2 =5;
 let res=0;

 const [data,change]=useState(0);
 const [data2,change2] =useState(0);
 const [data3,change3]=useState(0);



 function input1handler(event){
    num1 = event.target.value;
    console.log("you enterd value of num1"+num1);
 }
 function input2handler(event){
    num2 = event.target.value;
    console.log("you entered the value of num2"+num2)
 }
 
 function add(){
  (change(num1));
  (change2(num2));
   res=num1 + num2;

 change3(res);
  }
 function sub(){
  (change(num1));
  (change2(num2));
   res=num1 - num2;

 change3(res);
  }
  function mul(){
  (change(num1));
  (change2(num2));
   res=num1 * num2;

 change3(res);
  }
  function div(){
  (change(num1));
  (change2(num2));
   res=num1 / num2;

 change3(res);
  }


  return(
  <>
  Enter Number 1:
  <input type="number" onBlur={input1handler}/><br></br><br></br>
  Enter Number 2:
  <input type="number" onBlur={input2handler}/><br></br><br></br>

  <button type="submit" onClick={add}>Addition</button>
   <button type="submit" onClick={sub}>Substraction</button>
    <button type="submit" onClick={mul}>Multiplication</button>
     <button type="submit" onClick={div}>Division</button>
  <div style={{backgroundColor: 'lightblue'}}>
        <h1>Addition of {data} & {data2} is {data3}</h1>
     </div>

  </>
  )
}