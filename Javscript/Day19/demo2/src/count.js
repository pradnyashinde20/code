const { useCallback,useState} = require("react");


const funcSet = new Set();

 export default function DemoCallback(){

    const [cnt , setCnt]= useState(0);
    const [num,setNum]=useState(0);


    const incCnt = useCallback(
        ()=>setCnt((prevcnt)=>prevcnt+1)
     
    ,[]);

    const incCnt1 = useCallback(
        ()=>setCnt(cnt+1)
    ,[cnt])

    const desCnt = useCallback(
        ()=>setCnt(cnt-1)
        ,[cnt]);

     const incNum = useCallback(
         ()=>setNum(num+1)
        ,[num]);
    funcSet.add(incCnt);
    funcSet.add(desCnt);
    funcSet.add(incNum);

    return(
        <div>
            <h2>Without useCallback hook</h2>
            <button onClick={incCnt}>Increase Counter</button>
               <button onClick={desCnt}>decrease Counter</button>
                  <button onClick={incNum}>Increase Number</button>

                  <h1>Count :{cnt}</h1>
                  <h2>Number :{num}</h2>
                  <h2>Set Size :{funcSet.size}</h2>
        </div>
    )
}