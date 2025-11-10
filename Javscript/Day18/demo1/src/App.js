import logo from './logo.svg';
import './App.css';
import PasswordGenerator from './passwordGen';
import Counter from './Counter';
import errorBoundry from './errorboundry';




function App() {
  return (
    <>
<PasswordGenerator></PasswordGenerator> 
<errorBoundry>
  <Counter></Counter>
  </errorBoundry>
  </>
  );
}

export default App;
