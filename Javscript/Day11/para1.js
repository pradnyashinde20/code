let h = require('http');
const { URL } = require('url');

let todos = [
    { id: 1, task: 'read carefully' },
    { id: 2, task: 'implement' }
];

const server = h.createServer(function (req, res) {
    const { method, url } = req;
    const parsedUrl = new URL(url, `http://${req.headers.host}`);
    const pathname = parsedUrl.pathname;

    if (method === 'GET' && pathname === '/todos') {
        res.writeHead(200, { 'content-type': 'application/json' });
        res.end(JSON.stringify(todos));
        return;
    }

    // Check if URL starts with /todos/ and get the id after it
    if (method === 'GET' && pathname.startsWith('/todos/')) {
        const idStr = pathname.split('/')[2]; // get the part after /todos/
        const id = Number(idStr);

        if (isNaN(id)) {
            res.writeHead(400, { 'content-type': 'text/html' });
            res.end('<h1>Invalid ID</h1>');
            return;
        }

        const todo = todos.find(t => t.id === id);

        if (!todo) {
            res.writeHead(404, { 'content-type': 'text/html' });
            res.end('<h1>Todo not found</h1>');
            return;
        }

        // Return simple HTML for the specific todo
        res.writeHead(200, { 'content-type': 'text/html' });
        res.end(`
            <h1>Todo Details</h1>
            <p><strong>ID:</strong> ${todo.id}</p>
            <p><strong>Task:</strong> ${todo.task}</p>
        `);
        return;
    }

    // For any other requests
    res.writeHead(404, { 'content-type': 'text/html' });
    res.end('<h1>Not Found</h1>');
});

server.listen(3409, () => {
    console.log("server is started...");
});
