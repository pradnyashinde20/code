import logo from './logo.svg';
import './App.css';
import DemoCallback from './count';

import Appcontext from './context1';
import{
  BrowserRouter,Routes,Route,Link
}from  "react-router-dom";
import Home from './Home';
import Aboutus from './Aboutus';
import Contact from './Contact';
function App() {
  return (
  <div>
    <DemoCallback></DemoCallback>

  <Appcontext></Appcontext>
    
  </div>,
  <BrowserRouter>
   <nav
                style={{
                    backgroundColor: "gery",
                    padding: "10px",
                    display: "flex",
                    justifyContent: "center",
                }}
            >
                <ul
                    style={{
                        listStyle: "none",
                        display: "flex",
                        gap: "20px",
                        padding: "0",
                        margin: "0",
                    }}
                ></ul>
                
 <Link to="/">Home</Link><br></br>&emsp;&ensp;
  <Link to="/aboutus">Aboutus</Link><br></br>&emsp;&ensp;
  <Link to="/contact"> contact</Link><br></br>&emsp;&ensp;
  <br></br>
  <Routes>
    <Route path="/" element={<Home/>}></Route>
     <Route path="/aboutus" element={<Aboutus/>}></Route>
      <Route path="/contact" element={<Contact/>}></Route>
  </Routes>
  </nav>
  </BrowserRouter>

  );
}

export default App;
