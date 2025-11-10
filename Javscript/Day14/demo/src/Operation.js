export default function Operation(props,num1,num2,operation)
{
    let n1 = parseInt(props.num1);
    let n2 = parseInt(props.num2);
    let result=0;
    switch(props.operation)
    {
        case "add":
            result=n1+n2;
            break;
            case "sub":
            result=n1-n2;
            break;
            case "multi":
            result=n1*n2;
            break;
            case "division":
            result=n1/n2;
            break;
            default:
                result="invalid no";
        
    }
    return(
        <>
            <h1>operation result is :</h1>
            <h1>{n1}+{n2}={result}</h1>

        </>
    )
}