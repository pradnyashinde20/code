let arr =[1,34,23,56,445,45,56];

for(let i=1;i<arr.length;i++){
    for(let j=0;j<arr.length-1;j++){
     if(arr[j]>arr[j+1]){
        let temp =arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    };
    }
 
}console.log(arr);