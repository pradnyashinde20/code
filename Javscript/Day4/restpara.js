function calculate(...val){
    let sum =0;
    let odd =[];
    for(let i=0;i<val.length;i++){
        sum+=val[i];

        if(val[i]%2!=0){
             odd.push(val[i]);
              
        } 
    }console.log(odd);
    console.log(sum);
  
    console.log("maximum element is :"+Math.max(...val));
    
}
calculate(2,4,332,24,53,1,5,7,44,76);

