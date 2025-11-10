import axios from 'axios'
import React, { useState } from 'react'

const FetchData = () => {
    const [data , setData] = useState([]);
    function getData(){
        const p = axios.get("https://jsonplaceholder.typicode.com/posts");
        p.then(
             (res)=>{
                console.log(res.data)
                setData(res.data)
             }
        ).catch( 
            (err)=>{
                console.log("error occured")
            }
        )
    }
  return (
    <div>
        <button onClick={getData}>Get Data</button>
        <table style={{borderCollapse: 'collapse'}}>
        {
            data.map((obj , i)=>{
                return <tr key={i} style={{border:"2px solid"}}>
                    {
                    Object.entries(obj).map((key , val)=>{
                        return <td key={val} style={{border:"2px solid"}}>
                            {key[1]}
                        </td>
                    })
                    }
                </tr>
            })
        }
        </table>
    </div>
  )
}

export default FetchData