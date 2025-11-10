console.log("first");
setTimeout(()=>{ console.log("second")})
console.log("third");
Promise.resolve().then(()=> console.log("fourth"));