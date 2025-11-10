let p=process.argv[2];
let n=parseInt(p);
function facts(n)
{
    if(n==0||n==1)
    {
        return 1;
    }
 return n*facts(n-1);

}
//let n=4;
//console.log(facts(n));
let a=facts(n);
console.log(a);