
function factorial(num){
      if (num < 0) return "Factorial not defined for negative numbers";
    if (num === 0 || num === 1) return 1;
    return( num * factorial(num-1));
}
console.log(factorial(5))