export default function MyFunction(){
     const msg = "hello from Myfunction"
 return(
 <div style={{backgroundColor: 'lightgreen'}}>
 
 <h1>{msg}</h1>
 <Another name = "shivam"></Another>
 </div>
 )
}

function Another(props){
    return(
        <>
        <h3>Hello...{props.name}</h3>
        </>
    )
}
