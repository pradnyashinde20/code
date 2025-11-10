import { Component } from "react";
export default class Conversion extends Component{

    
     uppercase(){
      let a = document.getElementById("txt").value
      if(a===""){
        document.getElementById("res").innerText= "please fill the textfield";
      }else{
        document.getElementById("res").innerHTML+=a.toUpperCase();
      }

      document.getElementById("txt").value =""
     }


      lowercase(){
      let a = document.getElementById("txt").value
      if(a===""){
        document.getElementById("res").innerText= "please fill the textfield";
      }else{
        document.getElementById("res").innerHTML+=a.toLowerCase();
      }

      document.getElementById("txt").value =""
     }
    render(){
        return(
        <>
         Enter the text
        <input type="text" id="txt"/> 
         <h2 id="res">Output : </h2>
        <br></br><br></br>
       
        <button type="submit" value="uppercase" id="upper" onClick={this.uppercase}>Convert to Uppercase</button> <br></br><br></br>
        <button type="submit" value="lowercase" id="lower" onClick={this.lowercase}>Convert to Lowercase</button>

        </>
        )
    }
}