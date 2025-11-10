import { Component } from "react";

export default class Counter2 extends Component{
    constructor(props){
        super(props);
    }

    render(){

    
    return(
        <>
        <h1>Counter 2</h1>
        <h2>Count :{this.props.value}</h2>
        <button onClick={this.props.onClick}>button2</button>
        </>
    )
}
}