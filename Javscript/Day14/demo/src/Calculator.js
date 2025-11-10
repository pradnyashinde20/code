import { Component } from "react";
export default class Calculator extends Component{
    constructor(props){
    super(props);
    this.n1 = parseInt(props.num1);
    this.n2 = parseInt(props.num2);

    }
    calculate(){
      return(
        <>
        <h2>Addition of {this.n1} and {this.n2} is {this.n1+this.n2}</h2>
         <h2>multiplication of {this.n1} and {this.n2} is {this.n1*this.n2}</h2>
          <h2>Division of {this.n1} and {this.n2} is {this.n1/this.n2}</h2>
           <h2>substraction of {this.n1} and {this.n2} is {this.n1-this.n2}</h2>
        </>
      )
    }
    render(){
        return (
            <>
            <div style={{backgroundColor: 'pink'}}>
            {this.calculate()}
             </div>
            </>
        )
    }
}