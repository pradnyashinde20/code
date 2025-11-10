import { Component } from "react";

export default class Display extends Component{
    state={inputText:"",outputText:"",};
    handleInputChange=(event )=>{
        this.setState({inputText:event.target.value});
    };
handleUpperCase=()=>
{
    this.setState({outputText:this.state.inputText.toUpperCase()});
};
handleLowerCase=()=>{
    this.setState({outputText:this.state.inputText.toLowerCase()});
};

render()
{
    return(
    <div>
    <input type="text" value={this.state.inputText}
    onChange={this.handleInputChange}
    placeholder="enter text here"
    />
    <button onClick={this.handleUpperCase}>uppercase</button>
    <button onClick={this.handleLowerCase}>towercase</button>
    <p>outputText={this.state.outputText}</p>
    </div>
)
}
}
