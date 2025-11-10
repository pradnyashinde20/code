import { Component } from "react";
export default class Conversion extends Component{
    constructor(props){
        super(props)
        this.Handlecasechange=this.Handlecasechange.bind(this);
    }
        Handlecasechange(e){
            const case1 = e.target.value;
            switch (case1) {
                case 'upper':
                    this.uppercase();
                    break;
                 case 'lower':
                    this.lowercase();
                    break;
                case 'title':
                    this.titlecase();
                    break;
                default:
                    break;
            }

        
    }
    
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

    titlecase(){
      let a = document.getElementById("txt").value
      if(a===""){
        document.getElementById("res").innerText= "please fill the textfield";
      }else{
        document.getElementById("res").innerHTML+= a.toLowerCase().replace(/\b\w/g, s => s.toUpperCase());
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
       
       <select onChange={this.Handlecasechange}>
        <option>choose your choice</option>
        <option value="upper">Cnvert to Uppercase</option>
        <option value="lower">Convert to Lowercase</option>
        <option value="title">Convert to Titlecase</option>
       </select>
        {/* <button type="submit" value="uppercase" id="upper" onClick={this.uppercase}>Convert to Uppercase</button> <br></br><br></br>
        <button type="submit" value="lowercase" id="lower" onClick={this.lowercase}>Convert to Lowercase</button> <br></br><br></br>
        <button type ="submit" vlaue ="titlecase" onClick={this.titlecase}>Convert to TitleCase</button> */}

        </>
        )
    }
}