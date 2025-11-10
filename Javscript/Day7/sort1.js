let data =[{name:"shivam",age : 21, marks:60},
    {name:"arnav",age : 24, marks:48},
    
    {name:"kunal",age : 28, marks:94},
    
    {name:"pritam",age : 16, marks:90}
    

];
//descending sort
data.sort((s1,s2)=>{
    if(s1.marks<s2.marks)return 1;
    if(s1.marks>s2.marks)return -1;
    else
    return 0;
})
console.log(data);

//ascending sort
data.sort((s1,s2)=>{
    if(s1.marks<s2.marks)return 1;
    if(s1.marks>s2.marks)return -1;
    else
    return 0;
})
console.log(data);