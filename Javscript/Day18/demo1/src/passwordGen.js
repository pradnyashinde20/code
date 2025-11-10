import React ,{useState,useEffect} from 'react';

export default function PasswordGenerator(){
    const [password,setPassword]= useState("");
    const [length,setLength]=useState(12);
    const [includeNumbers, setIncludeNumbers]=useState(false);
    const [includeSymbols,setIncludeSymbols]=useState(false);



    const generatePassword=()=>{
        let characters = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';
        if(includeNumbers) characters+='1234567890';
        if(includeSymbols) characters+='~!@$%^&*+';

        let newPassword ='';
        for(let i=1;i<=length;i++){
            newPassword+= characters.charAt(Math.floor(Math.random() * characters.length));
        }
        setPassword(newPassword);
    };

    useEffect(()=>{generatePassword()},[length,includeNumbers,includeSymbols]);

    const copyToClipboard=()=>{
        navigator.clipboard.writeText(password);
        alert('password is copied to clipboard');
    };
    
    return (
    
<div>
    <h1>Welcome Random Password Generator</h1>
    <input type="number" value={length} onChange={(e)=>setLength(e.target.value)}></input><br></br>
    <input type="checkbox" checked={includeSymbols} onChange={(e)=>setIncludeSymbols(!includeSymbols)}>
   </input> IncludeSymbols<br></br>
    <input type="checkbox" checked={includeNumbers} onChange={(e)=>setIncludeNumbers(!includeNumbers)}>
    </input>IncludeNumbers<br></br>
    <input type="text" value={password} readOnly></input>
    <button onClick={copyToClipboard}>copy</button>
</div>
    );
   
}
    
