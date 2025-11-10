import logo from './logo.svg';
import './App.css';
import UseRef from './useRef';
import DemoAjax from './axios1';
import ShowData from './axios1';
import DemoForm from './DemoForm';
import FetchData from './axios2';
import Passwordgenerator from './password';
import Form from './From';



function App() {
  return (
  <>
   <UseRef/> <br/>
  <DemoAjax />
  <ShowData></ShowData> <br/>
  <DemoForm /> <br/>
  <FetchData />
  <Passwordgenerator></Passwordgenerator>
  <Form></Form>
  </>
  );
}

export default App;
