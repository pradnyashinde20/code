import React, { Component } from "react";

export default class Counter1 extends Component{
    constructor(props){
        super(props)
    };
 render(){
   if(this.props.value==3){
    throw Error("error occured!!");
   }
  return(
    <>
    <h1>Counter 1</h1>
    <h2>Count :{this.props.value}</h2>
    <button onClick={this.props.onClick}>button1</button>
    </>
  )
}
}