import { useEffect, useState } from "react";

export default function Countertable1(){

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

        <table border="1"><tbody>
          
             <tr> <td>{data *1}</td></tr>
             <tr> <td>{data *2}</td></tr>
             <tr> <td>{data *3}</td></tr>
             <tr> <td>{data *4}</td></tr>
             <tr> <td>{data *5}</td></tr>
             <tr> <td>{data *6}</td></tr>
              <tr> <td>{data *7}</td></tr>
               <tr> <td>{data *8}</td></tr>
                <tr> <td>{data *9}</td></tr>
                 <tr> <td>{data *10}</td></tr>
        
             
            </tbody></table>
        
        </>
     )
}