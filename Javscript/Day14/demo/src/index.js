import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import Factorial from './Factorial';
import Calculator from './Calculator';
import MyFunction from './multiple';
import Display from './assignment4';
import Conversion from './test';
import reportWebVitals from './reportWebVitals';
import Operation from './Operation';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
  <Factorial num1 ="5"/>
  <Calculator  num1="50" num2="20"></Calculator>
  <MyFunction />
  <Display />
  <Operation num1="10" num2="20" operation="add"/>

  <Conversion />
  
  </React.StrictMode>
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
