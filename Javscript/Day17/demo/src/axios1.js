import axios from 'axios';
import { useEffect, useState } from 'react';
    const GetData=()=>{

        let [jsonData,setData] = useState([]);
        let[error,seterror]=useState(null);
     useEffect(()=>{
     axios.get('https://jsonplaceholder.typicode.com/posts')
    

    .then((responce)=>{
        setData(responce.data);
    })
    .catch((err)=>
    {
        seterror(err.message)
    })

    },[]);
    if(error)return<div>error:{error}</div>;
    return(
        <div>
         

                <table border="1">
                <thead><th>key</th><th>title</th></thead>
                {jsonData.map((post)=>(
                     
                
                 <tr><td>{post.id}</td><td>{post.title}</td></tr>
                 
                ))
                
            }   </table> 
            
        </div>
    )
}
export default GetData;