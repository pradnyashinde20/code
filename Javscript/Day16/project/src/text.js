import { useEffect, useState } from "react";

export default function Text(){

     let [data,setstate]=useState([]);
      


     function handler(e){
       data = e.target.value;
       setstate(data);
       
     }


     return(
        <>
        Enter Your Text :
        <input type="text" onChange={handler}/>

        <ul>
           
                  <li>{data}</li>
            
      
        </ul>
        </>
     )
}