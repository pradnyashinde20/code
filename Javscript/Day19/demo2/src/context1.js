import { createContext, useContext } from "react";

const Context = createContext();

const Child=()=>{
    const context = useContext(Context);
    return(<h1>{context.data}</h1>)
}

export default function Appcontext(){
    return(
    <Context.Provider value={{data : "shivam parve"}}>
        <Child/>
        </Context.Provider>
 )
}