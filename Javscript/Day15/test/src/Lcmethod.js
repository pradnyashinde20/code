import { Component } from "react";

export default class Lcmethod extends Component{
//myfunction(){
        constructor(props)
        {
 super(props)
console.log("this constructor");
        }
      // return();
    

    static getDerivedStateFromProps()
    {
        console.log("this is getderivedstatefromprops method");
    }
    render()
    {
        return(
        <>
        <input type="text"></input></>
        )
    }
    componentDidMount()
    {
        console.log("this is last method");
    }
}