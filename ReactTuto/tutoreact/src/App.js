import logo from './logo.svg';
import './App.css';
import Navbar from "./Navbar";
import Welcome from "./Welcome";
import Page from "./Page";

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <Navbar/>

        <h5><Welcome name="Dom"/></h5>
        <Page/>
      </header>
    </div>
  );
}

export default App;