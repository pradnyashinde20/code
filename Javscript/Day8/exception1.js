function divide(a, b) {
    try {
        if (b === 0) {
            
            throw new Error("Division by zero is not allowed.");
        }

        let result = a / b;
        console.log(`Result: ${result}`);
    } catch (error) {
        console.log("Error:", error.message);
    } finally {
        console.log("Division attempt completed.");
    }
}


divide(10, 2); 
divide(8, 0);                     
